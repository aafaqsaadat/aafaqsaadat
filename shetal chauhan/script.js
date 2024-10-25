// Get the popup
const popup = document.getElementById("popup");

// Get the button that opens the popup
const openPopup = document.getElementById("openPopup");

// Get the <span> element that closes the popup
const closePopup = document.getElementById("closePopup");

// When the user clicks the button, open the popup
openPopup.onclick = function() {
    popup.style.display = "block";
}

// When the user clicks on <span> (x), close the popup
closePopup.onclick = function() {
    popup.style.display = "none";
}

// When the user clicks anywhere outside of the popup, close it
window.onclick = function(event) {
    if (event.target == popup) {
        popup.style.display = "none";
    }
}
