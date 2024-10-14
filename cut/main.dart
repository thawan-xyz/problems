import 'dart:io';

// @author: Thawan, 2024-10-04
// @problem: [ABC368] - Cut (AtCoder)
// @url: https://atcoder.jp/contests/abc368

List<int> readLine() {
  return stdin
    .readLineSync()!
    .split(' ')
    .map((String text) => int.parse(text))
    .toList();
}

void writeLine(int number, {String end = '\n'}) {
  stdout
    .write(number.toString() + end);
}

void main() {
  var [int n, int k] = readLine();
  final List<int> a = readLine();

  for (int i = n - k; i < n; i++) {
    writeLine(a[i], end: ' ');
  }
  for (int i = 0; i < n - k; i++) {
    writeLine(a[i], end: ' ');
  }
}
