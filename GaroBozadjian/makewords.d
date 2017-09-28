import std.stdio;
import std.array;
import std.string;

void main() {
	foreach(string e; lines(stdin)) {
		auto line = split(e," ");
		foreach(w; line) {
			auto word = chomp(cast(string)w);
			if(word != "") {
				writeln(word);
			}
		}
	}
}
