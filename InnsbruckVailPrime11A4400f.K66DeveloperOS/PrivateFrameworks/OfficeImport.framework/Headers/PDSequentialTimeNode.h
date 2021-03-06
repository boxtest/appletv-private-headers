/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDTimeNode.h"

@class PDAnimationTarget, NSString;

@interface PDSequentialTimeNode : PDTimeNode {
}
@property(assign, nonatomic) double delay;	// G=0x31922a01; S=0x319229a5; 
@property(assign, nonatomic) double direction;	// G=0x31922a8d; S=0x31922a55; 
@property(retain, nonatomic) NSString *groupId;	// G=0x31922aed; S=0x31922ac1; 
@property(assign, nonatomic) int iterateType;	// G=0x3192296d; S=0x31922931; 
@property(assign, nonatomic) int presetClass;	// G=0x31922861; S=0x31922835; 
@property(assign, nonatomic) int presetId;	// G=0x319228b5; S=0x31922889; 
@property(retain, nonatomic) PDAnimationTarget *target;	// G=0x3192280d; S=0x319227e1; 
@property(assign, nonatomic) int triggerType;	// G=0x31922909; S=0x319228dd; 
+ (id)newSequentialTimeNodeGroupForAnimationInfo;	// 0x319223a1
// declared property getter: - (double)delay;	// 0x31922a01
// declared property getter: - (double)direction;	// 0x31922a8d
// declared property getter: - (id)groupId;	// 0x31922aed
// declared property getter: - (int)iterateType;	// 0x3192296d
- (id)level1ParallelTimeNodeGroup;	// 0x3192270d
- (id)level2ParallelTimeNodeGroup;	// 0x31922749
- (id)level3SetBehavior;	// 0x31922795
// declared property getter: - (int)presetClass;	// 0x31922861
// declared property getter: - (int)presetId;	// 0x319228b5
// declared property setter: - (void)setDelay:(double)delay;	// 0x319229a5
// declared property setter: - (void)setDirection:(double)direction;	// 0x31922a55
// declared property setter: - (void)setGroupId:(id)anId;	// 0x31922ac1
// declared property setter: - (void)setIterateType:(int)type;	// 0x31922931
// declared property setter: - (void)setPresetClass:(int)aClass;	// 0x31922835
// declared property setter: - (void)setPresetId:(int)anId;	// 0x31922889
// declared property setter: - (void)setTarget:(id)target;	// 0x319227e1
// declared property setter: - (void)setTriggerType:(int)type;	// 0x319228dd
// declared property getter: - (id)target;	// 0x3192280d
// declared property getter: - (int)triggerType;	// 0x31922909
@end

