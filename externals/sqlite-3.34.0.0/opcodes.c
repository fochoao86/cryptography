/* Automatically generated.  Do not edit */
/* See the tool/mkopcodec.tcl script for details. */
#if !defined(SQLITE_OMIT_EXPLAIN) \
 || defined(VDBE_PROFILE) \
 || defined(SQLITE_DEBUG)
#if defined(SQLITE_ENABLE_EXPLAIN_COMMENTS) || defined(SQLITE_DEBUG)
# define OpHelp(X) "\0" X
#else
# define OpHelp(X)
#endif
const char *sqlite3OpcodeName(int i){
 static const char *const azName[] = {
    /*   0 */ "Savepoint"        OpHelp(""),
    /*   1 */ "AutoCommit"       OpHelp(""),
    /*   2 */ "Transaction"      OpHelp(""),
    /*   3 */ "SorterNext"       OpHelp(""),
    /*   4 */ "Prev"             OpHelp(""),
    /*   5 */ "Next"             OpHelp(""),
    /*   6 */ "Checkpoint"       OpHelp(""),
    /*   7 */ "JournalMode"      OpHelp(""),
    /*   8 */ "Vacuum"           OpHelp(""),
    /*   9 */ "VFilter"          OpHelp("iplan=r[P3] zplan='P4'"),
    /*  10 */ "VUpdate"          OpHelp("data=r[P3@P2]"),
    /*  11 */ "Goto"             OpHelp(""),
    /*  12 */ "Gosub"            OpHelp(""),
    /*  13 */ "InitCoroutine"    OpHelp(""),
    /*  14 */ "Yield"            OpHelp(""),
    /*  15 */ "MustBeInt"        OpHelp(""),
    /*  16 */ "Jump"             OpHelp(""),
    /*  17 */ "Once"             OpHelp(""),
    /*  18 */ "If"               OpHelp(""),
    /*  19 */ "Not"              OpHelp("r[P2]= !r[P1]"),
    /*  20 */ "IfNot"            OpHelp(""),
    /*  21 */ "IfNullRow"        OpHelp("if P1.nullRow then r[P3]=NULL, goto P2"),
    /*  22 */ "SeekLT"           OpHelp("key=r[P3@P4]"),
    /*  23 */ "SeekLE"           OpHelp("key=r[P3@P4]"),
    /*  24 */ "SeekGE"           OpHelp("key=r[P3@P4]"),
    /*  25 */ "SeekGT"           OpHelp("key=r[P3@P4]"),
    /*  26 */ "IfNotOpen"        OpHelp("if( !csr[P1] ) goto P2"),
    /*  27 */ "IfNoHope"         OpHelp("key=r[P3@P4]"),
    /*  28 */ "NoConflict"       OpHelp("key=r[P3@P4]"),
    /*  29 */ "NotFound"         OpHelp("key=r[P3@P4]"),
    /*  30 */ "Found"            OpHelp("key=r[P3@P4]"),
    /*  31 */ "SeekRowid"        OpHelp("intkey=r[P3]"),
    /*  32 */ "NotExists"        OpHelp("intkey=r[P3]"),
    /*  33 */ "Last"             OpHelp(""),
    /*  34 */ "IfSmaller"        OpHelp(""),
    /*  35 */ "SorterSort"       OpHelp(""),
    /*  36 */ "Sort"             OpHelp(""),
    /*  37 */ "Rewind"           OpHelp(""),
    /*  38 */ "IdxLE"            OpHelp("key=r[P3@P4]"),
    /*  39 */ "IdxGT"            OpHelp("key=r[P3@P4]"),
    /*  40 */ "IdxLT"            OpHelp("key=r[P3@P4]"),
    /*  41 */ "IdxGE"            OpHelp("key=r[P3@P4]"),
    /*  42 */ "RowSetRead"       OpHelp("r[P3]=rowset(P1)"),
    /*  43 */ "Or"               OpHelp("r[P3]=(r[P1] || r[P2])"),
    /*  44 */ "And"              OpHelp("r[P3]=(r[P1] && r[P2])"),
    /*  45 */ "RowSetTest"       OpHelp("if r[P3] in rowset(P1) goto P2"),
    /*  46 */ "Program"          OpHelp(""),
    /*  47 */ "FkIfZero"         OpHelp("if fkctr[P1]==0 goto P2"),
    /*  48 */ "IfPos"            OpHelp("if r[P1]>0 then r[P1]-=P3, goto P2"),
    /*  49 */ "IfNotZero"        OpHelp("if r[P1]!=0 then r[P1]--, goto P2"),
    /*  50 */ "IsNull"           OpHelp("if r[P1]==NULL goto P2"),
    /*  51 */ "NotNull"          OpHelp("if r[P1]!=NULL goto P2"),
    /*  52 */ "Ne"               OpHelp("IF r[P3]!=r[P1]"),
    /*  53 */ "Eq"               OpHelp("IF r[P3]==r[P1]"),
    /*  54 */ "Gt"               OpHelp("IF r[P3]>r[P1]"),
    /*  55 */ "Le"               OpHelp("IF r[P3]<=r[P1]"),
    /*  56 */ "Lt"               OpHelp("IF r[P3]<r[P1]"),
    /*  57 */ "Ge"               OpHelp("IF r[P3]>=r[P1]"),
    /*  58 */ "ElseNotEq"        OpHelp(""),
    /*  59 */ "DecrJumpZero"     OpHelp("if (--r[P1])==0 goto P2"),
    /*  60 */ "IncrVacuum"       OpHelp(""),
    /*  61 */ "VNext"            OpHelp(""),
    /*  62 */ "Init"             OpHelp("Start at P2"),
    /*  63 */ "PureFunc"         OpHelp("r[P3]=func(r[P2@NP])"),
    /*  64 */ "Function"         OpHelp("r[P3]=func(r[P2@NP])"),
    /*  65 */ "Return"           OpHelp(""),
    /*  66 */ "EndCoroutine"     OpHelp(""),
    /*  67 */ "HaltIfNull"       OpHelp("if r[P3]=null halt"),
    /*  68 */ "Halt"             OpHelp(""),
    /*  69 */ "Integer"          OpHelp("r[P2]=P1"),
    /*  70 */ "Int64"            OpHelp("r[P2]=P4"),
    /*  71 */ "String"           OpHelp("r[P2]='P4' (len=P1)"),
    /*  72 */ "Null"             OpHelp("r[P2..P3]=NULL"),
    /*  73 */ "SoftNull"         OpHelp("r[P1]=NULL"),
    /*  74 */ "Blob"             OpHelp("r[P2]=P4 (len=P1)"),
    /*  75 */ "Variable"         OpHelp("r[P2]=parameter(P1,P4)"),
    /*  76 */ "Move"             OpHelp("r[P2@P3]=r[P1@P3]"),
    /*  77 */ "Copy"             OpHelp("r[P2@P3+1]=r[P1@P3+1]"),
    /*  78 */ "SCopy"            OpHelp("r[P2]=r[P1]"),
    /*  79 */ "IntCopy"          OpHelp("r[P2]=r[P1]"),
    /*  80 */ "ResultRow"        OpHelp("output=r[P1@P2]"),
    /*  81 */ "CollSeq"          OpHelp(""),
    /*  82 */ "AddImm"           OpHelp("r[P1]=r[P1]+P2"),
    /*  83 */ "RealAffinity"     OpHelp(""),
    /*  84 */ "Cast"             OpHelp("affinity(r[P1])"),
    /*  85 */ "Permutation"      OpHelp(""),
    /*  86 */ "Compare"          OpHelp("r[P1@P3] <-> r[P2@P3]"),
    /*  87 */ "IsTrue"           OpHelp("r[P2] = coalesce(r[P1]==TRUE,P3) ^ P4"),
    /*  88 */ "Offset"           OpHelp("r[P3] = sqlite_offset(P1)"),
    /*  89 */ "Column"           OpHelp("r[P3]=PX"),
    /*  90 */ "Affinity"         OpHelp("affinity(r[P1@P2])"),
    /*  91 */ "MakeRecord"       OpHelp("r[P3]=mkrec(r[P1@P2])"),
    /*  92 */ "Count"            OpHelp("r[P2]=count()"),
    /*  93 */ "ReadCookie"       OpHelp(""),
    /*  94 */ "SetCookie"        OpHelp(""),
    /*  95 */ "ReopenIdx"        OpHelp("root=P2 iDb=P3"),
    /*  96 */ "OpenRead"         OpHelp("root=P2 iDb=P3"),
    /*  97 */ "OpenWrite"        OpHelp("root=P2 iDb=P3"),
    /*  98 */ "OpenDup"          OpHelp(""),
    /*  99 */ "OpenAutoindex"    OpHelp("nColumn=P2"),
    /* 100 */ "OpenEphemeral"    OpHelp("nColumn=P2"),
    /* 101 */ "BitAnd"           OpHelp("r[P3]=r[P1]&r[P2]"),
    /* 102 */ "BitOr"            OpHelp("r[P3]=r[P1]|r[P2]"),
    /* 103 */ "ShiftLeft"        OpHelp("r[P3]=r[P2]<<r[P1]"),
    /* 104 */ "ShiftRight"       OpHelp("r[P3]=r[P2]>>r[P1]"),
    /* 105 */ "Add"              OpHelp("r[P3]=r[P1]+r[P2]"),
    /* 106 */ "Subtract"         OpHelp("r[P3]=r[P2]-r[P1]"),
    /* 107 */ "Multiply"         OpHelp("r[P3]=r[P1]*r[P2]"),
    /* 108 */ "Divide"           OpHelp("r[P3]=r[P2]/r[P1]"),
    /* 109 */ "Remainder"        OpHelp("r[P3]=r[P2]%r[P1]"),
    /* 110 */ "Concat"           OpHelp("r[P3]=r[P2]+r[P1]"),
    /* 111 */ "SorterOpen"       OpHelp(""),
    /* 112 */ "BitNot"           OpHelp("r[P2]= ~r[P1]"),
    /* 113 */ "SequenceTest"     OpHelp("if( cursor[P1].ctr++ ) pc = P2"),
    /* 114 */ "OpenPseudo"       OpHelp("P3 columns in r[P2]"),
    /* 115 */ "String8"          OpHelp("r[P2]='P4'"),
    /* 116 */ "Close"            OpHelp(""),
    /* 117 */ "ColumnsUsed"      OpHelp(""),
    /* 118 */ "SeekScan"         OpHelp("Scan-ahead up to P1 rows"),
    /* 119 */ "SeekHit"          OpHelp("set P2<=seekHit<=P3"),
    /* 120 */ "Sequence"         OpHelp("r[P2]=cursor[P1].ctr++"),
    /* 121 */ "NewRowid"         OpHelp("r[P2]=rowid"),
    /* 122 */ "Insert"           OpHelp("intkey=r[P3] data=r[P2]"),
    /* 123 */ "RowCell"          OpHelp(""),
    /* 124 */ "Delete"           OpHelp(""),
    /* 125 */ "ResetCount"       OpHelp(""),
    /* 126 */ "SorterCompare"    OpHelp("if key(P1)!=trim(r[P3],P4) goto P2"),
    /* 127 */ "SorterData"       OpHelp("r[P2]=data"),
    /* 128 */ "RowData"          OpHelp("r[P2]=data"),
    /* 129 */ "Rowid"            OpHelp("r[P2]=rowid"),
    /* 130 */ "NullRow"          OpHelp(""),
    /* 131 */ "SeekEnd"          OpHelp(""),
    /* 132 */ "IdxInsert"        OpHelp("key=r[P2]"),
    /* 133 */ "SorterInsert"     OpHelp("key=r[P2]"),
    /* 134 */ "IdxDelete"        OpHelp("key=r[P2@P3]"),
    /* 135 */ "DeferredSeek"     OpHelp("Move P3 to P1.rowid if needed"),
    /* 136 */ "IdxRowid"         OpHelp("r[P2]=rowid"),
    /* 137 */ "FinishSeek"       OpHelp(""),
    /* 138 */ "Destroy"          OpHelp(""),
    /* 139 */ "Clear"            OpHelp(""),
    /* 140 */ "ResetSorter"      OpHelp(""),
    /* 141 */ "CreateBtree"      OpHelp("r[P2]=root iDb=P1 flags=P3"),
    /* 142 */ "SqlExec"          OpHelp(""),
    /* 143 */ "ParseSchema"      OpHelp(""),
    /* 144 */ "LoadAnalysis"     OpHelp(""),
    /* 145 */ "DropTable"        OpHelp(""),
    /* 146 */ "DropIndex"        OpHelp(""),
    /* 147 */ "DropTrigger"      OpHelp(""),
    /* 148 */ "IntegrityCk"      OpHelp(""),
    /* 149 */ "RowSetAdd"        OpHelp("rowset(P1)=r[P2]"),
    /* 150 */ "Real"             OpHelp("r[P2]=P4"),
    /* 151 */ "Param"            OpHelp(""),
    /* 152 */ "FkCounter"        OpHelp("fkctr[P1]+=P2"),
    /* 153 */ "MemMax"           OpHelp("r[P1]=max(r[P1],r[P2])"),
    /* 154 */ "OffsetLimit"      OpHelp("if r[P1]>0 then r[P2]=r[P1]+max(0,r[P3]) else r[P2]=(-1)"),
    /* 155 */ "AggInverse"       OpHelp("accum=r[P3] inverse(r[P2@P5])"),
    /* 156 */ "AggStep"          OpHelp("accum=r[P3] step(r[P2@P5])"),
    /* 157 */ "AggStep1"         OpHelp("accum=r[P3] step(r[P2@P5])"),
    /* 158 */ "AggValue"         OpHelp("r[P3]=value N=P2"),
    /* 159 */ "AggFinal"         OpHelp("accum=r[P1] N=P2"),
    /* 160 */ "Expire"           OpHelp(""),
    /* 161 */ "CursorLock"       OpHelp(""),
    /* 162 */ "CursorUnlock"     OpHelp(""),
    /* 163 */ "TableLock"        OpHelp("iDb=P1 root=P2 write=P3"),
    /* 164 */ "VBegin"           OpHelp(""),
    /* 165 */ "VCreate"          OpHelp(""),
    /* 166 */ "VDestroy"         OpHelp(""),
    /* 167 */ "VOpen"            OpHelp(""),
    /* 168 */ "VColumn"          OpHelp("r[P3]=vcolumn(P2)"),
    /* 169 */ "VRename"          OpHelp(""),
    /* 170 */ "Pagecount"        OpHelp(""),
    /* 171 */ "MaxPgcnt"         OpHelp(""),
    /* 172 */ "Trace"            OpHelp(""),
    /* 173 */ "CursorHint"       OpHelp(""),
    /* 174 */ "ReleaseReg"       OpHelp("release r[P1@P2] mask P3"),
    /* 175 */ "Noop"             OpHelp(""),
    /* 176 */ "Explain"          OpHelp(""),
    /* 177 */ "Abortable"        OpHelp(""),
  };
  return azName[i];
}
#endif
