#ifndef _DXF_EDIT_LIB
#define _DXF_EDIT_LIB

#include "dxf.h"
#include "list.h"
#include "graph.h"
#include "dxf_math.h"
#include "dxf_ent.h"
#include "dxf_dim.h"

enum Explode_mode{
	EXPL_DEFAULT = 0,
	EXPL_INS = 1,
	EXPL_VALUE = 2,
	EXPL_TAG = 4,
	EXPL_POLY = 8,
	EXPL_DIM = 16,
	EXPL_MTEXT = 32,
	EXPL_CHAR = 64,
	EXPL_HATCH = 128,
	EXPL_RAW_LINE = 256,
	EXPL_RAW_PLINE = 512,
};

int dxf_edit_move2 (dxf_node * obj, double ofs_x, double ofs_y, double ofs_z);

int dxf_edit_move (dxf_node * obj, double ofs_x, double ofs_y, double ofs_z);

int dxf_edit_scale (dxf_node * obj, double scale_x, double scale_y, double scale_z);

int dxf_edit_rot (dxf_node * obj, double ang);

int dxf_edit_mirror (dxf_node * obj, double x0, double y0, double x1, double y1);

int mtext_change_text (dxf_node *obj, char *text, int len, int pool);

list_node * dxf_edit_expl_ins(dxf_drawing *drawing, dxf_node * ins_ent, int mode);

list_node * dxf_edit_expl_dim(dxf_drawing *drawing, dxf_node * dim_ent, int mode);

list_node * dxf_edit_expl_raw(dxf_drawing *drawing, dxf_node * ent, int mode);

list_node * dxf_edit_expl_poly(dxf_drawing *drawing, dxf_node * ent, int mode);

list_node * dxf_delete_list(dxf_drawing *drawing, list_node *input);

#endif