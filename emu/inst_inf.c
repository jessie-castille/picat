char *inst_name[] = {
    "noop",
    "noop1",
    "allocate_det_b",
    "nondet",
    "cut_return",
    "return_det",
    "unify_constant_return_det",
    "cut_unify_value_return_det",
    "unify_value_return_det",
    "return_nondet",
    "unify_constant_return_nondet",
    "fork_unify_constant_return_nondet",
    "fork_unify_nil_unify_value_return_nondet",
    "unify_value_return_nondet",
    "bp_fork",
    "cut",
    "cut0",
    "unify_value_cut",
    "fail",
    "cut_fail",
    "fail0",
    "getbreg_y",
    "putbreg_y",
    "getpbreg_y",
    "halt",
    "halt0",
    "call0",
    "call_uv_d",
    "call_uv_det",
    "allocate_det",
    "call_uv_nondet",
    "call_uv_ot",
    "call_uuv_d",
    "call_uuv_det",
    "call_uuv_nondet",
    "call_uuv_ot",
    "call_uvv_d",
    "call_uvv_det",
    "call_uvv_nondet",
    "call_uvv_ot",
    "call_uvc_d",
    "call_uvc_det",
    "call_uvc_nondet",
    "call_uvc_ot",
    "call_uvu_d",
    "call_uvu_det",
    "call_uvu_nondet",
    "call_uvu_ot",
    "call_uvuv_d",
    "call_uvuv_det",
    "call_uvuv_nondet",
    "call_uvuv_ot",
    "call_uuuv_d",
    "call_uuuv_det",
    "call_uuuv_nondet",
    "call_uuuv_ot",
    "call_uuuuv_d",
    "call_uuuuv_det",
    "call_uuuuv_nondet",
    "call_uuuuv_ot",
    "call0_d",
    "call_v_d",
    "call_v_det",
    "call_v_nondet",
    "call_v_ot",
    "call_u_d",
    "call_u_det",
    "call_u_nondet",
    "call_u_ot",
    "call_2u_d",
    "call_2u_det",
    "call_2u_nondet",
    "allocate_nondet",
    "call_2u_ot",
    "call_3u_d",
    "call_3u_det",
    "call_3u_nondet",
    "call_3u_ot",
    "call_4u_d",
    "call_4u_det",
    "call_4u_nondet",
    "call_4u_ot",
    "call_5u_d",
    "call_5u_det",
    "call_5u_nondet",
    "call_5u_ot",
    "call_6u_d",
    "call_6u_det",
    "call_6u_nondet",
    "call_6u_ot",
    "call_7u_d",
    "call_7u_det",
    "call_7u_nondet",
    "call_7u_ot",
    "call_8u_d",
    "call_8u_det",
    "call_8u_nondet",
    "call_8u_ot",
    "call_9u_d",
    "call_9u_det",
    "call_9u_nondet",
    "call_9u_ot",
    "call_cu_d",
    "call_cu_det",
    "call_cu_nondet",
    "call_cu_ot",
    "call_cuu_d",
    "call_cuu_det",
    "call_cuu_nondet",
    "call_cuu_ot",
    "call_cuuu_d",
    "call_cuuu_det",
    "call_cuuu_nondet",
    "call_cuuu_ot",
    "call_cuuuu_d",
    "call_cuuuu_det",
    "call_cuuuu_nondet",
    "call_cuuuu_ot",
    "call_var",
    "call_var0",
    "jmp",
    "jmpn_eq_constant",
    "jmpn_nil",
    "jmpn_eq_struct",
    "jmpn_eq_struct_fetch_v",
    "switch_cons",
    "switch_cons_car",
    "switch_cons_910",
    "switch_cons_vv",
    "jmpn_eql_uu",
    "jmpn_eql_uc",
    "jmp_eql_uu",
    "jmp_eql_uu_fail",
    "jmp_eql_uu_ot",
    "jmp_eql_uc",
    "jmpn_gt_uu",
    "jmpn_gt_ui",
    "jmpn_gt_iu",
    "jmpn_ge_uu",
    "jmpn_ge_ui",
    "jmpn_ge_iu",
    "jmpn_id_uu",
    "jmpn_id_uc",
    "jmp_id_uu",
    "jmp_id_uc",
    "jmpn_var_y",
    "jmpn_var_y_fail0",
    "jmpn_var_y_ot",
    "jmp_var_y",
    "jmpn_atom_y",
    "jmpn_atomic_y",
    "jmpn_atomic_y_fail0",
    "jmpn_atomic_y_ot",
    "jmpn_num_y",
    "jmpn_float_y",
    "jmpn_int_y",
    "hash",
    "hash_jmpn_constant",
    "hash_branch_constant",
    "hash_jmpn_nil",
    "hash_jmpn_struct",
    "hash_branch_struct",
    "hash_jmpn_list0",
    "hash_jmpn_list",
    "para_uuuv",
    "para_uuv",
    "para_uv",
    "para_uuu",
    "para_uuuw",
    "para_uuw",
    "para_uw",
    "para_vv",
    "para_cuv",
    "para_cuuv",
    "para_uuuc",
    "para_uuc",
    "para_uu",
    "para_uc",
    "para_u",
    "para_v",
    "para_w",
    "para_c",
    "para_nil",
    "fetch_4v",
    "fetch_3v",
    "fetch_2v",
    "fetch_v",
    "fetch_vw",
    "fetch_wv",
    "fetch_w",
    "fetch_2w",
    "fetch_3w",
    "fetch_4w",
    "fetch_ws",
    "fetch_910",
    "fetch_45",
    "unify_constant",
    "fork_unify_constant",
    "unify_nil",
    "fork_unify_nil",
    "unify_struct",
    "fork_unify_struct",
    "unify_struct_cut",
    "unify_struct_arg_uv0",
    "unify_struct_arg_2v0",
    "unify_struct_arg_v0",
    "unify_struct_arg_2u",
    "unify_struct_arg_u",
    "unify_struct_arg_c",
    "unify_struct_arg_wc",
    "unify_arg_c",
    "unify_arg_u",
    "unify_arg_read_u",
    "unify_arg_v",
    "unify_arg_v0",
    "unify_arg_w",
    "unify_arg_struct",
    "unify_arg_list",
    "unify_arg_2c",
    "unify_arg_3c",
    "unify_arg_v0u",
    "unify_arg_v0c",
    "unify_arg_uv0",
    "unify_arg_v0w",
    "unify_arg_wc",
    "unify_arg_2v0",
    "unify_arg_3v0",
    "unify_arg_4v0",
    "unify_arg_3u",
    "unify_arg_2u",
    "unify_arg_2w",
    "unify_arg_3w",
    "unify_arg_4w",
    "unify_arg_5w",
    "build_arg_c",
    "build_arg_v",
    "build_arg_struct",
    "build_arg_list",
    "build_arg_2c",
    "build_arg_3c",
    "build_arg_v0u",
    "build_arg_v0c",
    "build_arg_uv0",
    "build_arg_v0w",
    "build_arg_wc",
    "build_arg_4v0",
    "build_arg_3v0",
    "build_arg_2v0",
    "build_arg_v0",
    "build_arg_5w",
    "build_arg_4w",
    "build_arg_3w",
    "build_arg_2w",
    "build_arg_w",
    "build_arg_4u",
    "build_arg_3u",
    "build_arg_2u",
    "build_arg_u",
    "unify_list",
    "unify_comp_list",
    "unify_cons",
    "cut_unify_cons_w",
    "unify_cons_w",
    "unify_cons_u",
    "unify_cons_v0",
    "cut_unify_cons_uu",
    "unify_cons_uu",
    "cut_unify_cons_uv",
    "unify_cons_uv0",
    "unify_cons_uw",
    "unify_cons_uc",
    "cut_unify_cons_vv",
    "unify_cons_v0v0",
    "cut_unify_cons_vu",
    "unify_cons_v0u",
    "unify_cons_v0w",
    "cut_unify_cons_vc",
    "unify_cons_v0c",
    "unify_cons_wv0",
    "unify_cons_cu",
    "cut_unify_cons_cv",
    "unify_cons_cv0",
    "unify_cons_cc",
    "unify_cons_ww",
    "unify_cons0_v910",
    "conc",
    "leng",
    "memb_le",
    "memb_el",
    "fork_unify_cons",
    "fork_unify_cons_uu",
    "fork_unify_cons_uv",
    "fork_unify_cons_uc",
    "fork_unify_cons_uw",
    "fork_unify_cons_vu",
    "fork_unify_cons_vv",
    "fork_unify_cons_vw",
    "fork_unify_cons_vc",
    "fork_unify_cons_cc",
    "fork_unify_cons_v910",
    "unify_value",
    "fork_unify_value",
    "move_constant",
    "move_struct",
    "move_struct0",
    "move_list",
    "move_comp_list",
    "move_comp_list1",
    "move_cons",
    "move_cons0_uv",
    "move_cons0_uu",
    "move_var",
    "move_value",
    "and",
    "or",
    "lshiftl",
    "lshiftr",
    "complement",
    "add_uuv",
    "add_uiv",
    "add_u1v",
    "add1",
    "sub_uuv",
    "sub_uiv",
    "sub_u1v",
    "sub1",
    "sub_iuv",
    "mul",
    "mul_iuv",
    "mul_uuv",
    "div",
    "idiv",
    "idiv_uiv",
    "idiv_uuv",
    "divge",
    "divle",
    "mod",
    "arg",
    "arg0",
    "setarg",
    "setarg0",
    "functor",
    "functor_uvv",
    "functor_vuu",
    "functor_arity",
    "get_clause_copy",
    "garbage_collect",
    "catch_clean_up",
    "throw_ball",
    "builtin0",
    "builtin1",
    "builtin2",
    "builtin3",
    "builtin4",
    "move_vars",
    "last_call",
    "last_call_var0",
    "last_call0",
    "last_call_d",
    "last_call1_d",
    "last_call_au_d",
    "last_call_au_det",
    "last_call_au_nondet",
    "last_call_au_ot",
    "last_call1_au_d",
    "last_call0_d",
    "last_call0_sa_d",
    "last_call0_sa_det",
    "last_call0_sa_nondet",
    "last_call0_sa_ot",
    "tr_det_call_au",
    "tr_det_call1_au",
    "tr_det_call2_au",
    "tr_det_call0",
    "tr_nondet_call_au",
    "tr_nondet_call1_au",
    "tr_nondet_call2_au",
    "tr_nondet_call0",
    "allocate_susp",
    "return_commit",
    "return_delay",
    "no_vars_gt",
    "trigger_var_ins",
    "trigger_var_minmax",
    "trigger_var_dom",
    "trigger_ins_min_max",
    "trigger_var_any_dom",
    "trigger_cg_event_handler",
    "fetch_event_object",
    "delay",
    "end_delay",
    "jmpn_dvar_y",
    "jmpn_susp_var_y",
    "interval_consistent_eq",
    "interval_consistent_eq_nocoe",
    "interval_consistent_ge",
    "call_binary_constr_eq",
    "domain_next_inst_yyy",
    "domain_set_false_yy",
    "domain_min_max_yyy",
    "domain_region",
    "domain_region_min",
    "domain_region_max",
    "v_in_cv_int",
    "v_in_vc_int",
    "u_in_cu_int",
    "u_in_uc_int",
    "u_eq_cu_dom",
    "u_eq_uc_dom",
    "bcp",
    "activate_first_agent",
    "activate_agents_conjunction",
    "activate_agents_disjunction",
    "table_allocate",
    "table_produce",
    "table_consume",
    "table_check_completion",
    "table_neck_no_reeval",
    "last_tabled_call",
    "table_cut",
    "table_neck",
    "table_eager_consume",
    "table_set_new_bit",
    "jmpn_unif",
    "jmp_unif",
    "arg_no_chk",
    "setarg0_no_chk",
    "bcp1",
    "domain_nogood_region",
    "endfile",
    "tabsize",
    "table_mode",
    "asp_decode",
    "asp_add_tuple",
    "set_catcher_frame",
    "filter_clauses"};