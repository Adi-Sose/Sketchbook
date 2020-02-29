const fs = require("fs"), print = console.log; function readline() { for (var r = new Buffer.alloc(256), e = new Buffer.alloc(256), f = 0, n = 0, o = !1, c = fs.openSync("/dev/stdin", "rs"); ;) { try { n = fs.readSync(c, r, 0, 256, null); var t = new Buffer.alloc(f + n); e.copy(t, 0, 0, f), r.copy(t, f, 0, n), e = t, f += n; for (var i = 0; n > i; i++)if (10 === r[i]) { o = !0; break } if (o) break } catch (a) { if ("EOF" === a.code) break; throw a } if (0 === n) break } return fs.closeSync(c), e.toString("utf-8").trim() }

const input = readline();
console.log(input);