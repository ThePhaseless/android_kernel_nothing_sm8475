# SPDX-License-Identifier: GPL-2.0-only
obj-$(CONFIG_COMMON_CLK_QCOM) += clk-qcom.o

clk-qcom-y += common.o
clk-qcom-y += vdd-class.o
clk-qcom-y += clk-regmap.o
clk-qcom-y += clk-alpha-pll.o
clk-qcom-y += clk-opp.o
clk-qcom-y += clk-pll.o
clk-qcom-y += clk-rcg.o
clk-qcom-y += clk-rcg2.o
clk-qcom-y += clk-branch.o
clk-qcom-y += clk-regmap-divider.o
clk-qcom-y += clk-regmap-mux.o
clk-qcom-y += clk-regmap-mux-div.o
clk-qcom-$(CONFIG_KRAIT_CLOCKS) += clk-krait.o
clk-qcom-y += clk-hfpll.o
clk-qcom-y += reset.o
clk-qcom-y += clk-pm.o
clk-qcom-y += clk-debug.o
clk-qcom-$(CONFIG_QCOM_GDSC) += gdsc.o
obj-$(CONFIG_COMMON_CLK_QCOM) += clk-dummy.o

obj-$(CONFIG_QCOM_GDSC_REGULATOR) += gdsc-regulator.o

# Keep alphabetically sorted by config
obj-$(CONFIG_APQ_GCC_8084) += gcc-apq8084.o
obj-$(CONFIG_APQ_MMCC_8084) += mmcc-apq8084.o
obj-$(CONFIG_IPQ_APSS_PLL) += apss-ipq-pll.o
obj-$(CONFIG_IPQ_APSS_6018) += apss-ipq6018.o
obj-$(CONFIG_IPQ_GCC_4019) += gcc-ipq4019.o
obj-$(CONFIG_IPQ_GCC_6018) += gcc-ipq6018.o
obj-$(CONFIG_IPQ_GCC_806X) += gcc-ipq806x.o
obj-$(CONFIG_IPQ_GCC_8074) += gcc-ipq8074.o
obj-$(CONFIG_IPQ_LCC_806X) += lcc-ipq806x.o
obj-$(CONFIG_MDM_GCC_9615) += gcc-mdm9615.o
obj-$(CONFIG_MDM_LCC_9615) += lcc-mdm9615.o
obj-$(CONFIG_MSM_CAMCC_WAIPIO) += camcc-waipio.o
obj-$(CONFIG_MSM_CLK_AOP_QMP) += clk-aop-qmp.o
obj-$(CONFIG_MSM_DEBUGCC_LAHAINA) += debugcc-lahaina.o
obj-$(CONFIG_MSM_DISPCC_LAHAINA) += dispcc-lahaina.o
obj-$(CONFIG_MSM_GCC_8660) += gcc-msm8660.o
obj-$(CONFIG_MSM_GCC_8916) += gcc-msm8916.o
obj-$(CONFIG_MSM_GCC_8939) += gcc-msm8939.o
obj-$(CONFIG_MSM_GCC_8960) += gcc-msm8960.o
obj-$(CONFIG_MSM_GCC_8974) += gcc-msm8974.o
obj-$(CONFIG_MSM_GCC_8994) += gcc-msm8994.o
obj-$(CONFIG_MSM_GCC_8996) += gcc-msm8996.o
obj-$(CONFIG_MSM_LCC_8960) += lcc-msm8960.o
obj-$(CONFIG_MSM_GCC_8998) += gcc-msm8998.o
obj-$(CONFIG_MSM_GPUCC_8998) += gpucc-msm8998.o
obj-$(CONFIG_MSM_MMCC_8960) += mmcc-msm8960.o
obj-$(CONFIG_MSM_MMCC_8974) += mmcc-msm8974.o
obj-$(CONFIG_MSM_MMCC_8996) += mmcc-msm8996.o
obj-$(CONFIG_MSM_MMCC_8998) += mmcc-msm8998.o
obj-$(CONFIG_MSM_GCC_LAHAINA) += gcc-lahaina.o
obj-$(CONFIG_MSM_GPUCC_LAHAINA) += gpucc-lahaina.o
obj-$(CONFIG_MSM_CAMCC_LAHAINA) += camcc-lahaina.o
obj-$(CONFIG_MSM_VIDEOCC_LAHAINA) += videocc-lahaina.o
obj-$(CONFIG_QCOM_A53PLL) += a53-pll.o
obj-$(CONFIG_QCOM_CLK_APCS_MSM8916) += apcs-msm8916.o
obj-$(CONFIG_QCOM_CLK_APCC_MSM8996) += clk-cpu-8996.o
obj-$(CONFIG_QCOM_CLK_RPM) += clk-rpm.o
obj-$(CONFIG_QCOM_CLK_RPMH) += clk-rpmh.o
obj-$(CONFIG_QCOM_CLK_SMD_RPM) += clk-smd-rpm.o
obj-$(CONFIG_QCS_GCC_404) += gcc-qcs404.o
obj-$(CONFIG_QCS_Q6SSTOP_404) += q6sstop-qcs404.o
obj-$(CONFIG_QCS_TURING_404) += turingcc-qcs404.o
obj-$(CONFIG_SC_DISPCC_7180) += dispcc-sc7180.o
obj-$(CONFIG_SC_GCC_7180) += gcc-sc7180.o
obj-$(CONFIG_SC_GPUCC_7180) += gpucc-sc7180.o
obj-$(CONFIG_SC_LPASS_CORECC_7180) += lpasscorecc-sc7180.o
obj-$(CONFIG_SC_MSS_7180) += mss-sc7180.o
obj-$(CONFIG_SC_VIDEOCC_7180) += videocc-sc7180.o
obj-$(CONFIG_SDM_CAMCC_845) += camcc-sdm845.o
obj-$(CONFIG_SDM_DISPCC_845) += dispcc-sdm845.o
obj-$(CONFIG_SDM_GCC_660) += gcc-sdm660.o
obj-$(CONFIG_SDM_GCC_845) += gcc-sdm845.o
obj-$(CONFIG_SDM_GPUCC_845) += gpucc-sdm845.o
obj-$(CONFIG_SDM_LPASSCC_845) += lpasscc-sdm845.o
obj-$(CONFIG_SDM_VIDEOCC_845) += videocc-sdm845.o
obj-$(CONFIG_SM_DISPCC_8250) += dispcc-sm8250.o
obj-$(CONFIG_SDX_DEBUGCC_LEMUR) += debugcc-sdxlemur.o
obj-$(CONFIG_SDX_GCC_LEMUR) += gcc-sdxlemur.o
obj-$(CONFIG_SM_CAMCC_DIWALI) += camcc-diwali.o
obj-$(CONFIG_SM_CAMCC_PARROT) += camcc-parrot.o
obj-$(CONFIG_SM_CAMCC_RAVELIN) += camcc-ravelin.o
obj-$(CONFIG_SM_CAMCC_SHIMA) += camcc-shima.o
obj-$(CONFIG_SXR_CAMCC_ANORAK) += camcc-anorak.o
obj-$(CONFIG_SXR_CAMCC_NEO) += camcc-neo.o
obj-$(CONFIG_SM_DEBUGCC_DIWALI) += debugcc-diwali.o
obj-$(CONFIG_SM_DEBUGCC_HOLI) += debugcc-holi.o
obj-$(CONFIG_SM_DEBUGCC_PARROT) += debugcc-parrot.o
obj-$(CONFIG_SM_DEBUGCC_RAVELIN) += debugcc-ravelin.o
obj-$(CONFIG_SM_DEBUGCC_SHIMA) += debugcc-shima.o
obj-$(CONFIG_SXR_DEBUGCC_ANORAK) += debugcc-anorak.o
obj-$(CONFIG_SXR_DEBUGCC_NEO) += debugcc-neo.o
obj-$(CONFIG_SM_DISPCC_DIWALI) += dispcc-diwali.o
obj-$(CONFIG_SM_DISPCC_HOLI) += dispcc-holi.o
obj-$(CONFIG_SM_DISPCC_PARROT) += dispcc-parrot.o
obj-$(CONFIG_SM_DISPCC_RAVELIN) += dispcc-ravelin.o
obj-$(CONFIG_SM_DISPCC_SHIMA) += dispcc-shima.o
obj-$(CONFIG_SXR_DISPCC_NEO) += dispcc-neo.o
obj-$(CONFIG_SXR_DISPCC_ANORAK) += dispcc0-anorak.o dispcc1-anorak.o
obj-$(CONFIG_SM_GCC_8150) += gcc-sm8150.o
obj-$(CONFIG_SM_GCC_DIWALI) += gcc-diwali.o
obj-$(CONFIG_SM_GCC_HOLI) += gcc-holi.o
obj-$(CONFIG_SM_GCC_PARROT) += gcc-parrot.o
obj-$(CONFIG_SM_GCC_RAVELIN) += gcc-ravelin.o
obj-$(CONFIG_SM_GCC_SHIMA) += gcc-shima.o
obj-$(CONFIG_SM_GCC_8250) += gcc-sm8250.o
obj-$(CONFIG_SXR_GCC_ANORAK) += gcc-anorak.o
obj-$(CONFIG_SXR_GCC_NEO) += gcc-neo.o
obj-$(CONFIG_MSM_GCC_WAIPIO) += gcc-waipio.o
obj-$(CONFIG_MSM_VIDEOCC_WAIPIO) += videocc-waipio.o
obj-$(CONFIG_MSM_GPUCC_WAIPIO) += gpucc-waipio.o
obj-$(CONFIG_MSM_DISPCC_WAIPIO) += dispcc-waipio.o
obj-$(CONFIG_MSM_DEBUGCC_WAIPIO) += debugcc-waipio.o
obj-$(CONFIG_SM_GPUCC_8150) += gpucc-sm8150.o
obj-$(CONFIG_SM_GPUCC_8250) += gpucc-sm8250.o
obj-$(CONFIG_SM_VIDEOCC_8150) += videocc-sm8150.o
obj-$(CONFIG_SM_VIDEOCC_8250) += videocc-sm8250.o
obj-$(CONFIG_SM_GPUCC_DIWALI) += gpucc-diwali.o
obj-$(CONFIG_SM_GPUCC_HOLI) += gpucc-holi.o
obj-$(CONFIG_SM_GPUCC_PARROT) += gpucc-parrot.o
obj-$(CONFIG_SM_GPUCC_RAVELIN) += gpucc-ravelin.o
obj-$(CONFIG_SM_GPUCC_SHIMA) += gpucc-shima.o
obj-$(CONFIG_SXR_GPUCC_ANORAK) += gpucc-anorak.o
obj-$(CONFIG_SXR_GPUCC_NEO) += gpucc-neo.o
obj-$(CONFIG_SM_VIDEOCC_DIWALI) += videocc-diwali.o
obj-$(CONFIG_SM_VIDEOCC_PARROT) += videocc-parrot.o
obj-$(CONFIG_SM_VIDEOCC_SHIMA) += videocc-shima.o
obj-$(CONFIG_SXR_VIDEOCC_ANORAK) += videocc-anorak.o
obj-$(CONFIG_SXR_VIDEOCC_NEO) += videocc-neo.o
obj-$(CONFIG_SPMI_PMIC_CLKDIV) += clk-spmi-pmic-div.o
obj-$(CONFIG_TCSRCC) += tcsrcc.o
obj-$(CONFIG_KPSS_XCC) += kpss-xcc.o
obj-$(CONFIG_QCOM_HFPLL) += hfpll.o
obj-$(CONFIG_KRAITCC) += krait-cc.o
