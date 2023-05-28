## Random Quote Generator 
How to guide on how the random quote generator program works and its functionality

## Table of Content

- Features
- DOM Methods Usage
- Practicality of the program
- Functionality

## Functions

- Generates random quotes using the [Quotable API](https://api.quotable.io/random).
- Displays the quote along with the author's name.
- Allows the user to listen to the quote using text-to-speech.
- Provides a copy button to easily copy the menu to the clipboard.
- Allows the user to load a new random menu.

## Using DOM methods

The program uses the following DOM methods:

- `querySelector`: Used to select specific elements from an HTML document.
- `fetch`: Used to make an HTTP request to the Quotable API and fetch a random quote.
- `addEventListener`: Used to attach event listeners to various elements.
- `innerText`: Used to set the text content of selected elements.
- `writeText`: Used to copy the quote text to the clipboard using the `navigator.clipboard` API.
- `SpeechSynthesisUtterance` and `speechSynthesis.speak`: Used to convert quote text to speech using the browser's text-to-speech functionality.

## Practicality of the program

This program provides a simple landing page that displays random quotes and allows users to interact with the quotes by listening to them or copying them to the clipboard. It can be used in different scenarios such as:

- Inspirational websites or blogs
- Daily deals app
- Personal development websites

## Functionality

### HTML
- Displays a landing page with a random quote.
- Contains elements for the quote text, author information, and control buttons.

### CSS
- Provides visual styling for the landing page, including background images and text formatting.

### JavaScript
- Fetches a random quote from the Quotable API.
- Updates the quote text and author information on the page.
- Allows users to fetch a new random quote.
- Enables text-to-speech functionality for the quote.
- Allows users to copy the quote text to the clipboard.

To run the program, make sure that the necessary HTML, CSS, and JavaScript files are linked correctly. When the page loads, a random quote is fetched from the Quotable API and displayed along with the author's name. Users can click the "New Quote" button to get a new random Quote. They can also click the sound icon to listen to the quote using text-to-speech or click the copy icon to copy the quote to the clipboard.
