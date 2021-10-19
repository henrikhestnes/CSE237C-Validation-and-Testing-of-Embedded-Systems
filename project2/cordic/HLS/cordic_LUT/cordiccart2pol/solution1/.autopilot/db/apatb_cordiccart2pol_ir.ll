; ModuleID = '/home/henrikhestnes/Documents/CSE-237C-Validation-and-Testing-of-Embedded-Systems/project2/cordic/HLS/cordic_LUT/cordiccart2pol/solution1/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

%struct.ap_fixed = type { %struct.ap_fixed_base }
%struct.ap_fixed_base = type { %struct.ssdm_int }
%struct.ssdm_int = type { i6 }

; Function Attrs: argmemonly noinline
define void @apatb_cordiccart2pol_ir(%struct.ap_fixed* nocapture readonly %x, %struct.ap_fixed* nocapture readonly %y, %struct.ap_fixed* %r, %struct.ap_fixed* %theta) local_unnamed_addr #0 {
entry:
  %r_copy1 = alloca i6, align 512
  %theta_copy2 = alloca i6, align 512
  call fastcc void @copy_in(%struct.ap_fixed* %r, i6* nonnull align 512 %r_copy1, %struct.ap_fixed* %theta, i6* nonnull align 512 %theta_copy2)
  call void @apatb_cordiccart2pol_hw(%struct.ap_fixed* %x, %struct.ap_fixed* %y, i6* %r_copy1, i6* %theta_copy2)
  call fastcc void @copy_out(%struct.ap_fixed* %r, i6* nonnull align 512 %r_copy1, %struct.ap_fixed* %theta, i6* nonnull align 512 %theta_copy2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_in(%struct.ap_fixed* readonly, i6* noalias align 512, %struct.ap_fixed* readonly, i6* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0struct.ap_fixed(i6* align 512 %1, %struct.ap_fixed* %0)
  call fastcc void @onebyonecpy_hls.p0struct.ap_fixed(i6* align 512 %3, %struct.ap_fixed* %2)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @copy_out(%struct.ap_fixed*, i6* noalias readonly align 512, %struct.ap_fixed*, i6* noalias readonly align 512) unnamed_addr #2 {
entry:
  call fastcc void @onebyonecpy_hls.p0struct.ap_fixed.9(%struct.ap_fixed* %0, i6* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0struct.ap_fixed.9(%struct.ap_fixed* %2, i6* align 512 %3)
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_fixed(i6* noalias align 512, %struct.ap_fixed* noalias readonly) unnamed_addr #3 {
entry:
  %2 = icmp eq i6* %0, null
  %3 = icmp eq %struct.ap_fixed* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_fixed, %struct.ap_fixed* %1, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i6* %5 to i8*
  %7 = load i8, i8* %6
  %8 = trunc i8 %7 to i6
  store i6 %8, i6* %0, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline
define internal fastcc void @onebyonecpy_hls.p0struct.ap_fixed.9(%struct.ap_fixed* noalias, i6* noalias readonly align 512) unnamed_addr #3 {
entry:
  %2 = icmp eq %struct.ap_fixed* %0, null
  %3 = icmp eq i6* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = getelementptr inbounds %struct.ap_fixed, %struct.ap_fixed* %0, i64 0, i32 0, i32 0, i32 0
  %6 = bitcast i6* %1 to i8*
  %7 = load i8, i8* %6
  %8 = trunc i8 %7 to i6
  store i6 %8, i6* %5, align 1
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

declare void @apatb_cordiccart2pol_hw(%struct.ap_fixed*, %struct.ap_fixed*, i6*, i6*)

define void @cordiccart2pol_hw_stub_wrapper(%struct.ap_fixed*, %struct.ap_fixed*, i6*, i6*) #4 {
entry:
  %4 = alloca %struct.ap_fixed
  %5 = alloca %struct.ap_fixed
  call void @copy_out(%struct.ap_fixed* %4, i6* %2, %struct.ap_fixed* %5, i6* %3)
  call void @cordiccart2pol_hw_stub(%struct.ap_fixed* %0, %struct.ap_fixed* %1, %struct.ap_fixed* %4, %struct.ap_fixed* %5)
  call void @copy_in(%struct.ap_fixed* %4, i6* %2, %struct.ap_fixed* %5, i6* %3)
  ret void
}

declare void @cordiccart2pol_hw_stub(%struct.ap_fixed*, %struct.ap_fixed*, %struct.ap_fixed*, %struct.ap_fixed*)

attributes #0 = { argmemonly noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline "fpga.wrapper.func"="copyout" }
attributes #3 = { argmemonly noinline "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #4 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
