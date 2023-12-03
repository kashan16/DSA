"use strict";
exports.__esModule = true;
exports.sumdigit = void 0;
var sumdigit = function (num) {
    if (num < 0) {
        throw new Error("Invalid");
    }
    var sum = 0;
    while (num != 0) {
        sum += num % 10;
        num = Math.floor(num / 10);
    }
    return (sum);
};
exports.sumdigit = sumdigit;
console.log((0, exports.sumdigit)(124423));
