"use strict";
exports.__esModule = true;
exports.Factorial = void 0;
var Factorial = function (num) {
    if (num < 0) {
        throw new Error("Invalid number");
    }
    return num === 0 ? 1 : num * (0, exports.Factorial)(num - 1);
};
exports.Factorial = Factorial;
console.log((0, exports.Factorial)(8));
