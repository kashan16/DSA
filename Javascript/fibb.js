"use strict";
exports.__esModule = true;
exports.nthfibb = void 0;
var nthfibb = function (num) {
    if (num === 0) {
        return 0;
    }
    if (num <= 2) {
        return 1;
    }
    return ((0, exports.nthfibb)(num - 1) + (0, exports.nthfibb)(num - 2));
};
exports.nthfibb = nthfibb;
for (var i = 1; i < 10; i++) {
    console.log((0, exports.nthfibb)(i), "\n");
}
