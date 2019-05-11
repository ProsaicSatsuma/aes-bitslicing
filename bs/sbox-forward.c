#include <stdint.h>
#include <stdio.h>
void sbox_forward(const uint32_t *inputs, uint32_t *outputs) {
  uint32_t r_0 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_1 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_2 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_3 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_4 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_5 = (~inputs[7]) & inputs[6] & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_6 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_7 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_8 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_9 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_10 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_11 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[4] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_12 = (~inputs[7]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_13 = (~inputs[7]) & inputs[6] & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_14 = (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_15 =
      (~inputs[7]) & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_16 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[0]);
  uint32_t r_17 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_18 = inputs[7] & inputs[6] & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_19 = (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[3] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_20 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_21 = (~inputs[7]) & (~inputs[6]) & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_22 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_23 = (~inputs[7]) & inputs[6] & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & inputs[0];
  uint32_t r_24 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_25 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[1] & (~inputs[0]);
  uint32_t r_26 = (~inputs[7]) & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_27 = (~inputs[7]) & (~inputs[6]) & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_28 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_29 = (~inputs[7]) & inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[3] & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_30 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_31 =
      (~inputs[7]) & inputs[6] & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_32 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_33 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_34 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_35 = (~inputs[7]) & inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[1] & inputs[0];
  uint32_t r_36 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[1]) & inputs[0];
  uint32_t r_37 = inputs[7] & inputs[6] & inputs[5] & inputs[4] & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_38 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_39 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & inputs[4] & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_40 = (~inputs[7]) & inputs[6] & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_41 = (~inputs[7]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_42 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_43 = inputs[7] & inputs[6] & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_44 = inputs[7] & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_45 = (~inputs[7]) & (~inputs[6]) & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_46 = (~inputs[7]) & inputs[5] & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_47 = inputs[7] & inputs[6] & inputs[5] & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_48 = (~inputs[7]) & (~inputs[6]) & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_49 = inputs[7] & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_50 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[1];
  uint32_t r_51 = inputs[7] & inputs[5] & inputs[4] & inputs[3] & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_52 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[4] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_53 = inputs[7] & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_54 = (~inputs[7]) & (~inputs[6]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_55 = (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_56 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[1]) & inputs[0];
  uint32_t r_57 = inputs[7] & inputs[6] & inputs[5] & inputs[3] & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_58 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & inputs[1] & inputs[0];
  uint32_t r_59 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[0]);
  uint32_t r_60 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_61 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[3] & inputs[2] & inputs[1];
  uint32_t r_62 = (~inputs[7]) & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_63 = (~inputs[7]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_64 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_65 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_66 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_67 = inputs[6] & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_68 = (~inputs[7]) & inputs[6] & inputs[5] & (~inputs[4]) & inputs[3] & inputs[1] & inputs[0];
  uint32_t r_69 = (~inputs[7]) & (~inputs[5]) & inputs[4] & inputs[3] & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_70 = (~inputs[6]) & (~inputs[5]) & inputs[4] & inputs[3] & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_71 =
      inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_72 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & inputs[0];
  uint32_t r_73 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[1]) & inputs[0];
  uint32_t r_74 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_75 = (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_76 = inputs[7] & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[1]);
  uint32_t r_77 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_78 =
      (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_79 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_80 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[0];
  uint32_t r_81 = inputs[6] & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_82 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[1]) & inputs[0];
  uint32_t r_83 = inputs[7] & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[1] & (~inputs[0]);
  uint32_t r_84 = (~inputs[7]) & inputs[6] & inputs[4] & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_85 = inputs[7] & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_86 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_87 = (~inputs[7]) & inputs[6] & (~inputs[5]) & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_88 = inputs[7] & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[1] & inputs[0];
  uint32_t r_89 = inputs[7] & inputs[6] & inputs[5] & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_90 = (~inputs[7]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_91 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_92 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_93 = (~inputs[7]) & inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_94 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_95 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & inputs[3] & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_96 = (~inputs[7]) & (~inputs[6]) & inputs[5] & inputs[3] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_97 = inputs[7] & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_98 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_99 = (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_100 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_101 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & inputs[3] & inputs[1] & inputs[0];
  uint32_t r_102 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_103 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[3] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_104 = inputs[7] & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_105 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_106 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_107 = (~inputs[7]) & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & (~inputs[1]);
  uint32_t r_108 = (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_109 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[0]);
  uint32_t r_110 = (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[0]);
  uint32_t r_111 = (~inputs[7]) & inputs[6] & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_112 = (~inputs[7]) & inputs[6] & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_113 = inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[0]);
  uint32_t r_114 = (~inputs[6]) & (~inputs[5]) & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_115 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_116 = inputs[6] & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_117 = (~inputs[7]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_118 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[0]);
  uint32_t r_119 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[2]) & (~inputs[0]);
  uint32_t r_120 = (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_121 = (~inputs[7]) & inputs[6] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[0];
  uint32_t r_122 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[1] & (~inputs[0]);
  uint32_t r_123 = (~inputs[7]) & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[0]);
  uint32_t r_124 = (~inputs[6]) & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_125 = inputs[6] & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[0]);
  uint32_t r_126 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_127 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[2]) & (~inputs[1]);
  uint32_t r_128 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & (~inputs[2]);
  uint32_t r_129 = inputs[7] & (~inputs[5]) & (~inputs[3]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_130 = inputs[7] & inputs[6] & inputs[5] & inputs[4] & inputs[3] & inputs[1] & (~inputs[0]);
  uint32_t r_131 = (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[0]);
  uint32_t r_132 = (~inputs[7]) & inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[3] & (~inputs[2]) & (~inputs[0]);
  uint32_t r_133 = inputs[6] & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_134 = inputs[7] & (~inputs[6]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_135 = inputs[7] & inputs[6] & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_136 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[3] & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_137 = (~inputs[6]) & inputs[4] & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_138 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[4] & inputs[3] & inputs[2] & inputs[1];
  uint32_t r_139 = inputs[7] & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_140 = (~inputs[7]) & inputs[6] & (~inputs[4]) & inputs[3] & (~inputs[2]) & inputs[0];
  uint32_t r_141 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[3]) & inputs[0];
  uint32_t r_142 = (~inputs[6]) & (~inputs[4]) & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_143 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[2]) & (~inputs[1]);
  uint32_t r_144 = inputs[7] & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]);
  uint32_t r_145 = (~inputs[7]) & (~inputs[5]) & (~inputs[4]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_146 = (~inputs[7]) & inputs[6] & (~inputs[4]) & inputs[3] & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_147 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[3] & inputs[2] & inputs[1];
  uint32_t r_148 = inputs[7] & inputs[5] & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_149 = (~inputs[7]) & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_150 = inputs[7] & inputs[6] & inputs[5] & inputs[4] & inputs[3] & inputs[2] & (~inputs[0]);
  uint32_t r_151 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_152 = inputs[7] & inputs[6] & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_153 = inputs[7] & (~inputs[5]) & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_154 = (~inputs[7]) & inputs[6] & inputs[4] & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_155 = (~inputs[7]) & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & inputs[0];
  uint32_t r_156 = (~inputs[6]) & inputs[5] & (~inputs[3]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_157 = (~inputs[7]) & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & inputs[2] & inputs[0];
  uint32_t r_158 = (~inputs[7]) & inputs[6] & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_159 = (~inputs[7]) & inputs[4] & inputs[3] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_160 = inputs[7] & inputs[6] & (~inputs[4]) & inputs[3] & (~inputs[1]) & inputs[0];
  uint32_t r_161 = (~inputs[7]) & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_162 = (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_163 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_164 = inputs[6] & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_165 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & inputs[2] & inputs[1];
  uint32_t r_166 = inputs[7] & inputs[4] & (~inputs[3]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_167 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_168 = inputs[7] & (~inputs[5]) & inputs[4] & inputs[3] & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_169 = inputs[7] & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_170 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[3] & (~inputs[2]) & (~inputs[1]);
  uint32_t r_171 = inputs[7] & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_172 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & inputs[1];
  uint32_t r_173 = (~inputs[7]) & inputs[6] & inputs[5] & (~inputs[3]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_174 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_175 = inputs[7] & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_176 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_177 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[1]) & inputs[0];
  uint32_t r_178 = (~inputs[6]) & (~inputs[5]) & inputs[4] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_179 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[2] & inputs[0];
  uint32_t r_180 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_181 = inputs[7] & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_182 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[3]) & inputs[1] & inputs[0];
  uint32_t r_183 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_184 = inputs[7] & inputs[6] & inputs[4] & inputs[3] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_185 = inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_186 = inputs[7] & inputs[6] & inputs[5] & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_187 = inputs[7] & inputs[6] & inputs[5] & inputs[4] & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_188 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[4]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_189 = inputs[7] & inputs[6] & (~inputs[5]) & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_190 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_191 = (~inputs[6]) & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_192 = inputs[7] & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_193 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_194 = inputs[7] & (~inputs[6]) & (~inputs[5]) & (~inputs[3]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_195 = inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[1]);
  uint32_t r_196 = (~inputs[7]) & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[2]) & inputs[0];
  uint32_t r_197 = (~inputs[7]) & (~inputs[6]) & (~inputs[4]) & inputs[3] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_198 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[3]) & inputs[2] & (~inputs[0]);
  uint32_t r_199 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & inputs[3] & inputs[1] & (~inputs[0]);
  uint32_t r_200 = (~inputs[7]) & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[1];
  uint32_t r_201 = (~inputs[7]) & (~inputs[6]) & (~inputs[3]) & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_202 = (~inputs[7]) & inputs[6] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_203 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & inputs[4] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_204 = (~inputs[7]) & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[0]);
  uint32_t r_205 = (~inputs[7]) & inputs[5] & inputs[4] & inputs[3] & inputs[2] & inputs[1] & (~inputs[0]);
  uint32_t r_206 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[4]) & inputs[3] & (~inputs[2]) & inputs[1];
  uint32_t r_207 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & inputs[2] & (~inputs[1]) & (~inputs[0]);
  uint32_t r_208 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[4] & inputs[3] & inputs[2];
  uint32_t r_209 = inputs[6] & (~inputs[5]) & (~inputs[4]) & inputs[3] & (~inputs[2]) & inputs[0];
  uint32_t r_210 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[4] & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & (~inputs[0]);
  uint32_t r_211 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_212 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_213 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[3]) & (~inputs[2]) & inputs[1];
  uint32_t r_214 = inputs[7] & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_215 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[4] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_216 = (~inputs[7]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_217 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & inputs[3] & inputs[2] & (~inputs[1]);
  uint32_t r_218 = inputs[7] & inputs[6] & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_219 = inputs[7] & inputs[6] & (~inputs[5]) & (~inputs[3]) & inputs[1] & inputs[0];
  uint32_t r_220 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[3] & inputs[2] & (~inputs[1]) & inputs[0];
  uint32_t r_221 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & (~inputs[2]) & inputs[0];
  uint32_t r_222 = inputs[7] & (~inputs[5]) & (~inputs[4]) & inputs[3] & (~inputs[2]) & inputs[1] & (~inputs[0]);
  uint32_t r_223 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[3] & inputs[2] & inputs[0];
  uint32_t r_224 = inputs[7] & inputs[6] & inputs[5] & (~inputs[4]) & inputs[3] & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_225 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[3] & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_226 = (~inputs[7]) & (~inputs[4]) & (~inputs[3]) & inputs[2] & (~inputs[0]);
  uint32_t r_227 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[4] & inputs[2];
  uint32_t r_228 = inputs[6] & inputs[5] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_229 = (~inputs[7]) & inputs[6] & (~inputs[5]) & inputs[4] & inputs[3];
  uint32_t r_230 = (~inputs[7]) & (~inputs[6]) & (~inputs[5]) & (~inputs[4]) & (~inputs[3]) & (~inputs[0]);
  uint32_t r_231 = (~inputs[7]) & (~inputs[6]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[1]);
  uint32_t r_232 = (~inputs[5]) & (~inputs[4]) & inputs[3] & (~inputs[1]) & inputs[0];
  uint32_t r_233 = (~inputs[7]) & inputs[5] & (~inputs[4]) & (~inputs[3]) & (~inputs[1]) & inputs[0];
  uint32_t r_234 = inputs[7] & (~inputs[4]) & (~inputs[3]) & inputs[2] & inputs[1];
  uint32_t r_235 = (~inputs[7]) & inputs[3] & (~inputs[2]) & inputs[1] & inputs[0];
  uint32_t r_236 = inputs[6] & (~inputs[4]) & inputs[2] & inputs[1] & inputs[0];
  uint32_t r_237 = (~inputs[7]) & inputs[6] & inputs[5] & (~inputs[4]) & (~inputs[2]) & (~inputs[1]) & inputs[0];
  uint32_t r_238 = inputs[7] & (~inputs[6]) & (~inputs[5]) & inputs[4] & inputs[3] & (~inputs[1]);
  uint32_t r_239 = (~inputs[7]) & inputs[6] & inputs[5] & inputs[4] & inputs[3] & (~inputs[1]) & inputs[0];
  uint32_t r_240 = inputs[7] & (~inputs[6]) & inputs[5] & inputs[3] & inputs[1] & (~inputs[0]);
  outputs[0] = r_3 | r_6 | r_10 | r_13 | r_18 | r_19 | r_20 | r_40 | r_43 | r_44 |
         r_45 | r_52 | r_56 | r_58 | r_60 | r_65 | r_66 | r_72 | r_77 | r_78 |
         r_88 | r_89 | r_91 | r_95 | r_98 | r_104 | r_105 | r_108 | r_109 |
         r_110 | r_111 | r_113 | r_117 | r_118 | r_119 | r_129 | r_130 | r_133 |
         r_134 | r_136 | r_144 | r_147 | r_149 | r_151 | r_157 | r_158 | r_164 |
         r_169 | r_173 | r_174 | r_195 | r_196 | r_201 | r_202 | r_206 | r_209 |
         r_210 | r_211 | r_212 | r_214 | r_215 | r_224 | r_228 | r_232 | r_233 |
         r_237;
  outputs[1] = r_5 | r_22 | r_24 | r_29 | r_32 | r_33 | r_34 | r_37 | r_38 | r_41 |
         r_42 | r_49 | r_50 | r_51 | r_52 | r_54 | r_55 | r_71 | r_77 | r_93 |
         r_94 | r_107 | r_108 | r_109 | r_112 | r_114 | r_116 | r_119 | r_120 |
         r_121 | r_127 | r_132 | r_135 | r_138 | r_143 | r_145 | r_146 | r_153 |
         r_155 | r_161 | r_168 | r_169 | r_172 | r_174 | r_176 | r_183 | r_184 |
         r_187 | r_188 | r_189 | r_193 | r_196 | r_198 | r_199 | r_200 | r_205 |
         r_208 | r_210 | r_216 | r_217 | r_219 | r_224 | r_225 | r_226 | r_230 |
         r_238 | r_239;
  outputs[2] = r_4 | r_5 | r_13 | r_27 | r_28 | r_31 | r_32 | r_33 | r_34 | r_37 |
         r_38 | r_39 | r_45 | r_55 | r_59 | r_64 | r_66 | r_70 | r_74 | r_75 |
         r_76 | r_81 | r_84 | r_86 | r_87 | r_94 | r_95 | r_96 | r_98 | r_99 |
         r_103 | r_104 | r_105 | r_106 | r_115 | r_142 | r_146 | r_148 | r_151 |
         r_152 | r_157 | r_160 | r_162 | r_163 | r_165 | r_168 | r_171 | r_173 |
         r_174 | r_175 | r_181 | r_184 | r_185 | r_186 | r_187 | r_188 | r_189 |
         r_190 | r_191 | r_192 | r_193 | r_201 | r_210 | r_212 | r_213 | r_214 |
         r_215 | r_217 | r_219 | r_220 | r_222 | r_224 | r_225 | r_231 | r_233 |
         r_234 | r_238 | r_239 | r_240;
  outputs[3] = r_1 | r_2 | r_7 | r_8 | r_17 | r_18 | r_22 | r_28 | r_29 | r_30 |
         r_31 | r_36 | r_37 | r_40 | r_47 | r_48 | r_50 | r_51 | r_57 | r_59 |
         r_63 | r_68 | r_71 | r_73 | r_76 | r_78 | r_80 | r_81 | r_83 | r_89 |
         r_90 | r_91 | r_94 | r_95 | r_97 | r_100 | r_101 | r_102 | r_127 |
         r_130 | r_134 | r_135 | r_146 | r_149 | r_152 | r_154 | r_156 | r_158 |
         r_163 | r_166 | r_167 | r_170 | r_171 | r_172 | r_179 | r_180 | r_183 |
         r_188 | r_189 | r_192 | r_194 | r_200 | r_203 | r_204 | r_208 | r_211 |
         r_215 | r_216 | r_218 | r_220 | r_221 | r_224 | r_229 | r_233 | r_237;
  outputs[4] = r_15 | r_16 | r_21 | r_24 | r_26 | r_30 | r_34 | r_46 | r_48 | r_56 |
         r_62 | r_64 | r_65 | r_69 | r_70 | r_71 | r_75 | r_83 | r_85 | r_89 |
         r_90 | r_91 | r_92 | r_95 | r_96 | r_97 | r_98 | r_99 | r_100 | r_104 |
         r_106 | r_111 | r_116 | r_117 | r_118 | r_124 | r_125 | r_127 | r_132 |
         r_136 | r_140 | r_141 | r_144 | r_150 | r_154 | r_155 | r_163 | r_164 |
         r_169 | r_171 | r_174 | r_177 | r_179 | r_180 | r_182 | r_183 | r_184 |
         r_186 | r_189 | r_193 | r_197 | r_205 | r_207 | r_209 | r_217 | r_218 |
         r_220 | r_221 | r_222 | r_223 | r_224 | r_227 | r_231 | r_239;
  outputs[5] = r_1 | r_7 | r_12 | r_14 | r_23 | r_24 | r_28 | r_29 | r_31 | r_32 |
         r_39 | r_47 | r_53 | r_57 | r_58 | r_61 | r_65 | r_66 | r_67 | r_68 |
         r_79 | r_87 | r_88 | r_93 | r_98 | r_102 | r_108 | r_117 | r_118 |
         r_122 | r_123 | r_126 | r_130 | r_133 | r_139 | r_149 | r_150 | r_157 |
         r_162 | r_163 | r_164 | r_176 | r_180 | r_182 | r_183 | r_185 | r_187 |
         r_189 | r_190 | r_192 | r_193 | r_197 | r_199 | r_200 | r_204 | r_205 |
         r_206 | r_210 | r_212 | r_213 | r_216 | r_218 | r_220 | r_221 | r_222 |
         r_225 | r_230 | r_231 | r_235 | r_237 | r_239 | r_240;
  outputs[6] = r_0 | r_2 | r_9 | r_11 | r_13 | r_15 | r_33 | r_41 | r_42 | r_43 |
         r_46 | r_49 | r_53 | r_60 | r_61 | r_62 | r_63 | r_66 | r_67 | r_69 |
         r_74 | r_77 | r_78 | r_80 | r_82 | r_84 | r_91 | r_92 | r_93 | r_94 |
         r_100 | r_102 | r_105 | r_111 | r_128 | r_131 | r_132 | r_134 | r_135 |
         r_138 | r_139 | r_143 | r_149 | r_151 | r_159 | r_161 | r_162 | r_165 |
         r_170 | r_174 | r_176 | r_177 | r_179 | r_181 | r_182 | r_183 | r_185 |
         r_186 | r_187 | r_191 | r_193 | r_194 | r_195 | r_198 | r_206 | r_210 |
         r_216 | r_218 | r_221 | r_222 | r_223 | r_224 | r_230 | r_237 | r_238;
  outputs[7] = r_3 | r_4 | r_6 | r_8 | r_9 | r_15 | r_18 | r_22 | r_25 | r_30 | r_35 |
         r_38 | r_39 | r_44 | r_54 | r_65 | r_71 | r_72 | r_73 | r_77 | r_78 |
         r_79 | r_82 | r_85 | r_86 | r_89 | r_93 | r_100 | r_101 | r_102 |
         r_103 | r_104 | r_105 | r_109 | r_116 | r_119 | r_133 | r_136 | r_137 |
         r_138 | r_139 | r_143 | r_144 | r_149 | r_150 | r_152 | r_154 | r_155 |
         r_158 | r_161 | r_163 | r_165 | r_168 | r_170 | r_172 | r_173 | r_177 |
         r_178 | r_181 | r_187 | r_190 | r_191 | r_194 | r_200 | r_202 | r_203 |
         r_205 | r_206 | r_207 | r_210 | r_212 | r_215 | r_217 | r_225 | r_236 |
         r_237 | r_239 | r_240;
}
