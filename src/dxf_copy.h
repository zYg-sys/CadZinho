#ifndef _DXF_CPY_LIB
#define _DXF_CPY_LIB

#include "dxf.h"
#include "list.h"

dxf_node *dxf_ent_copy(dxf_node *source, int pool_dest);

dxf_node *dxf_ent_cpy_simple(dxf_node *source, int pool_dest);

int dxf_drwg_ent_cpy(dxf_drawing *source, dxf_drawing *dest, list_node *list);

list_node * dxf_drwg_ent_cpy_all(dxf_drawing *source, dxf_drawing *dest, int pool_idx);

int dxf_cpy_layer (dxf_drawing *drawing, dxf_node *layer);

int dxf_cpy_lay_drwg(dxf_drawing *source, dxf_drawing *dest);

dxf_node * dxf_cpy_ltype (dxf_drawing *drawing, dxf_node *ltype);

int dxf_cpy_ltyp_drwg(dxf_drawing *source, dxf_drawing *dest);

long int dxf_cpy_style (dxf_drawing *drawing, dxf_node *style);

int dxf_cpy_sty_drwg(dxf_drawing *source, dxf_drawing *dest);

int dxf_block_cpy(dxf_drawing *source, dxf_drawing *dest, dxf_node *block, dxf_node **block_rec, dxf_node **new_block);

int dxf_cpy_appid_drwg(dxf_drawing *source, dxf_drawing *dest);

#endif