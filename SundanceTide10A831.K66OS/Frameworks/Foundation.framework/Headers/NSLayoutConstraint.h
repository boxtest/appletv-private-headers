/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSISConstraint.h"

@class NSString;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {
	id _container;	// 4 = 0x4
	id _firstItem;	// 8 = 0x8
	id _secondItem;	// 12 = 0xc
	float _constant;	// 16 = 0x10
	float _loweredConstant;	// 20 = 0x14
	id _markerAndPositiveExtraVar;	// 24 = 0x18
	id _negativeExtraVar;	// 28 = 0x1c
	float _coefficient;	// 32 = 0x20
	float _priority;	// 36 = 0x24
	unsigned long long _layoutConstraintFlags;	// 40 = 0x28
	id _flange;	// 48 = 0x30
}
@property(retain) id animations;	// G=0x32651149; S=0x32651159; converted property
@property(assign) float constant;	// G=0x32651c31; S=0x32651ced; 
@property(assign) id container;	// G=0x3265153d; S=0x32651561; 
@property(assign) int firstAttribute;	// G=0x32650859; 
@property(assign) id firstItem;	// G=0x326550bd; @synthesize=_firstItem
@property(readonly, assign) BOOL hasBeenLowered;	// G=0x32650f21; 
@property(copy) NSString *identifier;	// G=0x32651129; S=0x32651139; 
@property(assign) float multiplier;	// G=0x326509dd; 
@property(assign) float priority;	// G=0x32650c29; S=0x32650c39; 
@property(assign) int relation;	// G=0x32650915; 
@property(assign) int secondAttribute;	// G=0x32650b39; 
@property(assign) id secondItem;	// G=0x326550e9; @synthesize=_secondItem
@property(assign) BOOL shouldBeArchived;	// G=0x32650bfd; S=0x32650c11; 
@property(copy) NSString *symbolicConstant;	// G=0x32651edd; S=0x32651eed; 
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by constant:(float)constant;	// 0x32655081
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5;	// 0x32655049
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 constant:(float)constant;	// 0x32655009
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier;	// 0x32654fd1
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier constant:(float)constant;	// 0x32654cc9
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier symbolicConstant:(id)constant;	// 0x326549c1
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier symbolicConstant:(id)constant theme:(id)theme;	// 0x326549b1
+ (id)constraintsWithVisualFormat:(id)visualFormat options:(unsigned)options metrics:(id)metrics views:(id)views;	// 0x32654995
- (id)init;	// 0x32651f01
- (id)initWithCoder:(id)coder;	// 0x326531b5
- (void)_addToEngine:(id)engine;	// 0x32653d01
- (BOOL)_addToEngine:(id)engine integralizationAdjustment:(float)adjustment mutuallyExclusiveConstraints:(id *)constraints;	// 0x32653a7d
- (float)_allowedMagnitudeForIntegralizationAdjustment;	// 0x326511a9
- (float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float *)markerScaling;	// 0x32651319
- (void)_clearWeakContainerReference;	// 0x32651579
- (id)_constantDescriptionForDTrace;	// 0x32651bb9
- (id)_constraintByReplacingItem:(id)item withItem:(id)item2;	// 0x32653535
- (id)_constraintByReplacingView:(id)view withView:(id)view2;	// 0x32653735
- (int)_constraintType;	// 0x32651fe1
- (void)_containerGeometryDidChange;	// 0x326516d9
- (BOOL)_deferDTraceLogging;	// 0x326514b1
- (BOOL)_describesSameRestrictionAsConstraint:(id)constraint;	// 0x32653745
- (id)_descriptionforSymbolicConstant;	// 0x32651b31
- (BOOL)_effectiveConstant:(float *)constant error:(id *)error;	// 0x326517fd
- (CGSize)_engineToContainerScalingCoefficients;	// 0x3265405d
- (float)_fudgeIncrement;	// 0x32651199
- (id)_identifier;	// 0x32650f4d
- (BOOL)_isFudgeable;	// 0x3265116d
- (BOOL)_loweredConstantIsRounded;	// 0x3265154d
- (id)_loweredExpression;	// 0x32654369
- (id)_loweredExpressionReportingConstantIsRounded:(BOOL *)rounded;	// 0x3265409d
- (void)_makeExtraVars;	// 0x32653e65
- (id)_markerAndPositiveExtraVar;	// 0x32651409
- (id)_negativeExtraVar;	// 0x3265145d
- (BOOL)_nsib_isRedundant;	// 0x32654955
- (BOOL)_nsib_isRedundantInEngine:(id)engine;	// 0x32654539
- (int)_primitiveConstraintType;	// 0x326514dd
- (id)_priorityDescription;	// 0x32652725
- (void)_removeFromEngine:(id)engine;	// 0x32653d21
- (void)_setDeferDTraceLogging:(BOOL)logging;	// 0x326514c5
- (void)_setFirstAttribute:(int)attribute;	// 0x32650869
- (void)_setFirstItem:(id)item;	// 0x326550d1
- (void)_setIdentifier:(id)identifier;	// 0x32650fd9
- (void)_setMarkerAndPositiveErrorVar:(id)var;	// 0x32651419
- (void)_setMultiplier:(float)multiplier;	// 0x326509ed
- (void)_setNegativeExtraVar:(id)var;	// 0x3265146d
- (void)_setPrimitiveConstraintType:(int)type;	// 0x32651509
- (void)_setRelation:(int)relation;	// 0x3265092d
- (void)_setSecondAttribute:(int)attribute;	// 0x32650b4d
- (void)_setSecondItem:(id)item;	// 0x326550fd
- (void)_setSymbolicConstant:(id)constant;	// 0x32651da1
- (void)_setSymbolicConstant:(id)constant constant:(float)constant2;	// 0x326518a1
- (id)_symbolicConstant;	// 0x32651d01
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(id)undoHandler;	// 0x3265158d
// converted property getter: - (id)animations;	// 0x32651149
- (id)asciiArtDescription;	// 0x326522e5
// declared property getter: - (float)constant;	// 0x32651c31
// declared property getter: - (id)container;	// 0x3265153d
- (void)dealloc;	// 0x32651f55
- (id)description;	// 0x32652b6d
- (id)descriptionAccessory;	// 0x326527a5
- (void)encodeWithCoder:(id)coder;	// 0x32652f01
- (id)equationDescription;	// 0x326527a9
// declared property getter: - (int)firstAttribute;	// 0x32650859
// declared property getter: - (id)firstItem;	// 0x326550bd
// declared property getter: - (BOOL)hasBeenLowered;	// 0x32650f21
// declared property getter: - (id)identifier;	// 0x32651129
// declared property getter: - (float)multiplier;	// 0x326509dd
- (float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)marker;	// 0x326513ed
- (id)nsis_descriptionOfVariable:(id)variable;	// 0x326543bd
- (BOOL)nsis_shouldIntegralizeVariable:(id)variable;	// 0x32651401
- (void)nsis_valueOfVariable:(id)variable didChangeInEngine:(id)engine;	// 0x326513fd
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)variableIsUserObservable;	// 0x32651405
// declared property getter: - (float)priority;	// 0x32650c29
- (float)priorityForVariable:(id)variable;	// 0x32653a6d
// declared property getter: - (int)relation;	// 0x32650915
// declared property getter: - (int)secondAttribute;	// 0x32650b39
// declared property getter: - (id)secondItem;	// 0x326550e9
// converted property setter: - (void)setAnimations:(id)animations;	// 0x32651159
// declared property setter: - (void)setConstant:(float)constant;	// 0x32651ced
// declared property setter: - (void)setContainer:(id)container;	// 0x32651561
- (void)setHasBeenLowered:(BOOL)lowered;	// 0x32650f35
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x32651139
// declared property setter: - (void)setPriority:(float)priority;	// 0x32650c39
// declared property setter: - (void)setShouldBeArchived:(BOOL)beArchived;	// 0x32650c11
// declared property setter: - (void)setSymbolicConstant:(id)constant;	// 0x32651eed
// declared property getter: - (BOOL)shouldBeArchived;	// 0x32650bfd
// declared property getter: - (id)symbolicConstant;	// 0x32651edd
@end

