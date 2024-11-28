#Nsovo W. Maswanganyi
from django.shortcuts import render
from django.http import HttpResponseRedirect
from django.urls import reverse
from django import forms

# Create your views here.
class NewSongsForm(forms.Form):
    song = forms.CharField(label="Add Song")

def index(request):
    if "playlist" not in request.session:
        request.session["playlist"] = []

    return render(request,'playlist/index.html',{
        "playlist":request.session["playlist"]
    })

def add(request):
    if request.method == "POST":
        form = NewSongsForm(request.POST)
        if form.is_valid():
            song = form.cleaned_data["song"]
            request.session["playlist"] += [song]
            return HttpResponseRedirect(reverse('playlist:index'))
        else:
            return render(request,"playlist/add.html",{
                "form":form
            })
        
    return render(request,"playlist/add.html",{
        "form":NewSongsForm()
    })


