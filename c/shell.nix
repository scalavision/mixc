with import <nixpkgs> {};
stdenv.mkDerivation {
 name = "env";
 nativeBuildInputs = [ clang ];
 buildInputs = [ ];
}

