/* Hey EMACS -*- linux-c -*- */
/* $Id$ */

/*  libticalcs - Ti Calculator library, a part of the TiLP project
 *  Copyright (C) 1999-2005  Romain Li�vin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __CALC_DIRLIST__
#define __CALC_DIRLIST__

void TICALL ticalc_dirlist_destroy(TNode ** tree);
void TICALL ticalc_dirlist_display(TNode * tree);
int TICALL ticalc_dirlist_numvars(TNode * tree);
int TICALL ticalc_dirlist_memused(TNode * tree);
TiVarEntry *TICALL ticalc_check_if_var_exists(TNode * tree, char *varname);
TiVarEntry *TICALL ticalc_check_if_app_exists(TNode * tree, char *appname);
char **TICALL ticalc_action_create_array(int num_entries);
void TICALL ticalc_action_destroy_array(char **array);

#endif