--- components/url_formatter/spoof_checks/idn_spoof_checker.cc.orig	2020-07-07 21:58:15 UTC
+++ components/url_formatter/spoof_checks/idn_spoof_checker.cc
@@ -272,7 +272,7 @@ IDNSpoofChecker::IDNSpoofChecker() {
   // The ideal fix would be to change the omnibox font used for Thai. In
   // that case, the Linux-only list should be revisited and potentially
   // removed.
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
        "[ทนบพรหเแ๐ดลปฟม]",
 #else
        "[บพเแ๐]",
