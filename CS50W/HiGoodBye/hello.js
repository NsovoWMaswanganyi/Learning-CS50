const heading = document.querySelector('h1');

function hello() {
    if (heading.innerHTML === 'Hello') {
        heading.innerHTML = 'Goodbye';
    } 
    else {
        heading.innerHTML = 'Hello';
    }
}