import katex from "./katex/katex.mjs";

function renderToString(input, options) {
	// console.log("options =", JSON.stringify(options, null, 2));

	console.warn = console.log;  // katex expects console.warn to work
	return katex.renderToString(input, options);
}

globalThis.renderToString = renderToString;
