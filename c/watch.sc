import $ivy.`com.lihaoyi::os-lib-watch:0.4.2`

val wd = os.pwd

val dir = wd / "pointers"
val file = dir / "ptr_definition.c"

println("starting to watch path: " + dir)
os.watch.watch(Seq(dir, file), files => { println("change: " + files) ; pprint.pprintln(os.proc("./c", file.toString()).call(cwd = dir ) ) } )

while(true) {
  println("going to sleep")
  Thread.sleep(1000L)
}

println("exiting ..")

