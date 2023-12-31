.onAttach <- function(libname, pkgname) {
    msg <- sprintf(
        "Package '%s' is deprecated and will be removed from Bioconductor
         version %s . Functionalities moved to IsoformSwitchAnalyzeR",
        pkgname, "3.7")
    .Deprecated(msg=paste(strwrap(msg, exdent=2), collapse="\n"))
}
