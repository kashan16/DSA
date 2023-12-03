"use strict";
exports.__esModule = true;
exports.toBinary = void 0;
var toBinary = function (num) {
    var binary = '';
    while (num !== 0) {
        binary = (num % 2) + binary;
        num = Math.floor(num / 2);
    }
    return binary;
};
exports.toBinary = toBinary;
console.log((0, exports.toBinary)(65));
