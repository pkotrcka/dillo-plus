/*
 * File: about.c
 *
 * Copyright (C) 1999-2007 Jorge Arellano Cid <jcid@dillo.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 */

#include <config.h>

/*
 * HTML text for startup screen
 */
const char *const AboutSplash=
"<!DOCTYPE HTML PUBLIC '-//W3C//DTD HTML 4.01 Transitional//EN'>\n"
"<html>\n"
"<head>\n"
"<title>Splash screen for dillo-" VERSION "</title>\n"
"<style>\n"
"	body {\n"
"		background-color: #778899;\n"
"		color: #0f0f0f;\n"
"	}\n"
"	h1 {\n"
"		color: white;\n"
"		margin: 0 1em 0 1em;\n"
"		text-align: center;\n"
"	}\n"
"	th {\n"
"		color: white;\n"
"	}\n"
"</style>\n"
"</head>\n"
"\n"
"<body>\n"
"\n"
"<br>\n"
"\n"
"<table width='100%' border='0' cellspacing='1' cellpadding='3' bgcolor='#000000'>\n"
"  <tr><th bgcolor='#4F4F4F'><h1>About Dillo+ " VERSION "</h1></th></tr>\n"
"</table>\n"
"\n"
"<br>\n"
"\n"
"\n"
"<!-- the main layout table, definition -->\n"
"\n"
"<table width='100%' border='0' cellspacing='0' cellpadding='0'>\n"
"<tr><td valign='top' width='150' align='center'>\n"
"\n"
"\n"
"<!--   The navigation bar   -->\n"
"\n"
"<table border='0' cellspacing='0' cellpadding='0' width='140' bgcolor='#000000'>\n"
"<tr>\n"
" <td>\n"
"  <table width='100%' border='0' cellspacing='1' cellpadding='3'>\n"
"  <tr>\n"
"   <th colspan='1' bgcolor='#4F4F4F'><b>Dillo+</b>\n"
"  <tr>\n"
"   <td bgcolor='#FFFFFF'>\n"
"    <table border='0' cellspacing='0' cellpadding='5'><tr><td>\n"
"    <table border='0' cellspacing='0' cellpadding='2'><tr>\n"
"    <td><td><a href='file:" DOC_PATH "/user_help.html'>Help</a>\n"
"     <tr><td><td><a href='http://www.dillo.org/dillo3-help.html'>\n"
"     Online Help</a>\n"
"    <tr>\n"
"    <td>&nbsp;&nbsp;\n"
"    <td>\n"
"     <a href='https://github.com/crossbowerbt/dillo-plus/'>Project Home</a>\n"
"    </table>\n"
"    </table>\n"
"  </table>\n"
"</table>\n"
"\n"
"<br>\n"
"\n"
"<table border='0' width='100%' cellpadding='10' cellspacing='0'><tr><td height='10'></table>\n"
"\n"
"\n"
"<!-- the main layout table, a small vertical spacer -->\n"
"\n"
"<td width='20'><td valign='top'>\n"
"\n"
"\n"
"<!--   Main Part of the page   -->\n"
"\n"
"<table border='0' cellpadding='0' cellspacing='0' align='center' bgcolor='#000000' width='100%'><tr><td>\n"
"<table border='0' cellpadding='5' cellspacing='1' width='100%'>\n"
"<tr ALIGN=LEFT VALIGN=TOP>\n"
" <td bgcolor='lightgrey' color='black'>\n"
"  <h4>Release Notes</h4>\n"
"<tr>\n"
" <td bgcolor='#FFFFFF'>\n"
"  <table border='0' cellspacing='0' cellpadding='5'><tr><td>\n"
"  <p>\n"
"  <b>Dillo+</b> is a graphical web browser derived from <i>Dillo</i>. The browser focuses on accessing lightweight websites and, for more common websites, it limits loading of bload and advertisements.  For both speed and security, there's no support for Javascript</p>\n"
" <h4>Protocols:</h4>\n"
" <p>\n"
"  Dillo+ supports the lightweight protocols gopher and gemini in addition to http and https. It aims to become your default browser for accessing the <i>smol</i> web.</p>\n"
" <h4>Reader mode CSS:</h4>\n"
" <p>To make it easier reading articles from the web, and also to rearrange large pages in a format easier on the eyes, it is possible to activate a reader mode CSS from the 'Tools' menu.</p>\n"
" <h4>Additional content types:</h4>\n"
" <p>Support for rendering pages and local files written in the gemini, gopher and markdown formats has been added.</p>\n"
" <h4>DLS Scripts:</h4>\n"
" <p>To implement some advanced features, like Zip, EPub, RSS, Telegram channels and others, a system of external scripts/plugins called DLS (Dillo Local Script) has been added to the browser. You can see the available DLS using the prefix <a href=\"dls:\">dls:</a> (to call a DLS add its name after the prefix).</p>\n"
"<h4>Searching:</h4>\n"
"<p>\n"
"If wanted, there is a search dialog that is available by pressing 's'.  It includes your search engines\n"
"that are defined in your dillorc file\n"
"</p>\n"
" <h5>Quick Searching</h5>\n"
" <p>You can search common sites by typing one of the following key letters, followed by a space and your search term.</p>\n"
" <p>For example, <i>'dd pizza'</i>, will search the Duck Duck Go website for the term <i>'pizza'</i>.</p>\n"
" <ul>\n"
"        <li>dd - to search DuckDuckGo</li>\n"
"        <li>se - to search SearX (prvcy.eu)</li>\n"
"        <li>se2 - to search2 SearX (metasearx.com)</li>\n"
"        <li>se3 - to search3 SearX (searxng.au)</li>\n"
"        <li>se4 - to search4 SearX (cosmohub.io)</li>\n"
"        <li>ya - to search Yandex</li>\n"
"        <li>wk - to search Wikipedia</li>\n"
"        <li>ar - to search Internet Archive</li>\n"
"        <li>fd - to search Free Dictionary</li>\n"
"        <li>sp - to search Startpage</li>\n"
"        <li>mn - to search Marginalia</li>\n"
"        <li>te - to search Teclis</li>\n"
"        <li>gg - to search Google</li>\n"
"        <li>ge - to search GeminiSpace</li>\n"
"        <li>lg - to search LibGen</li>\n"
"        <li>gr - to search GoodReads</li>\n"
"        <li>pb - to search The Pirate Bay</li>\n"
"        <li>tw - to search Twitter</li>\n"
"        <li>un - to search Unsplash</li>\n"
"        <li>dv - to search Deviant Art</li>\n"
" </ul>\n"
" <p>To modify these quick searches, refer to this <a href='file:" DOC_PATH "/user_help.html#search'>link</a>.</p>\n"
" <br/>"
" <p><b>Please, enjoy using Dillo+!</b><p>\n"
"  </table>\n"
"</table>\n"
"</table>\n"
"\n"
"<!--   footnotes   -->\n"
"\n"
"<br><br><center>\n"
"</center>\n"
"</body>\n"
"</html>\n";

