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
@property(retain) id animations;	// G=0x31a9c149; S=0x31a9c159; converted property
@property(assign) float constant;	// G=0x31a9cc31; S=0x31a9cced; 
@property(assign) id container;	// G=0x31a9c53d; S=0x31a9c561; 
@property(assign) int firstAttribute;	// G=0x31a9b859; 
@property(assign) id firstItem;	// G=0x31aa00bd; @synthesize=_firstItem
@property(readonly, assign) BOOL hasBeenLowered;	// G=0x31a9bf21; 
@property(copy) NSString *identifier;	// G=0x31a9c129; S=0x31a9c139; 
@property(assign) float multiplier;	// G=0x31a9b9dd; 
@property(assign) float priority;	// G=0x31a9bc29; S=0x31a9bc39; 
@property(assign) int relation;	// G=0x31a9b915; 
@property(assign) int secondAttribute;	// G=0x31a9bb39; 
@property(assign) id secondItem;	// G=0x31aa00e9; @synthesize=_secondItem
@property(assign) BOOL shouldBeArchived;	// G=0x31a9bbfd; S=0x31a9bc11; 
@property(copy) NSString *symbolicConstant;	// G=0x31a9cedd; S=0x31a9ceed; 
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by constant:(float)constant;	// 0x31aa0081
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5;	// 0x31aa0049
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 constant:(float)constant;	// 0x31aa0009
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier;	// 0x31a9ffd1
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier constant:(float)constant;	// 0x31a9fcc9
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier symbolicConstant:(id)constant;	// 0x31a9f9c1
+ (id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 multiplier:(float)multiplier symbolicConstant:(id)constant theme:(id)theme;	// 0x31a9f9b1
+ (id)constraintsWithVisualFormat:(id)visualFormat options:(unsigned)options metrics:(id)metrics views:(id)views;	// 0x31a9f995
- (id)init;	// 0x31a9cf01
- (id)initWithCoder:(id)coder;	// 0x31a9e1b5
- (void)_addToEngine:(id)engine;	// 0x31a9ed01
- (BOOL)_addToEngine:(id)engine integralizationAdjustment:(float)adjustment mutuallyExclusiveConstraints:(id *)constraints;	// 0x31a9ea7d
- (float)_allowedMagnitudeForIntegralizationAdjustment;	// 0x31a9c1a9
- (float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float *)markerScaling;	// 0x31a9c319
- (void)_clearWeakContainerReference;	// 0x31a9c579
- (id)_constantDescriptionForDTrace;	// 0x31a9cbb9
- (id)_constraintByReplacingItem:(id)item withItem:(id)item2;	// 0x31a9e535
- (id)_constraintByReplacingView:(id)view withView:(id)view2;	// 0x31a9e735
- (int)_constraintType;	// 0x31a9cfe1
- (void)_containerGeometryDidChange;	// 0x31a9c6d9
- (BOOL)_deferDTraceLogging;	// 0x31a9c4b1
- (BOOL)_describesSameRestrictionAsConstraint:(id)constraint;	// 0x31a9e745
- (id)_descriptionforSymbolicConstant;	// 0x31a9cb31
- (BOOL)_effectiveConstant:(float *)constant error:(id *)error;	// 0x31a9c7fd
- (CGSize)_engineToContainerScalingCoefficients;	// 0x31a9f05d
- (float)_fudgeIncrement;	// 0x31a9c199
- (id)_identifier;	// 0x31a9bf4d
- (BOOL)_isFudgeable;	// 0x31a9c16d
- (BOOL)_loweredConstantIsRounded;	// 0x31a9c54d
- (id)_loweredExpression;	// 0x31a9f369
- (id)_loweredExpressionReportingConstantIsRounded:(BOOL *)rounded;	// 0x31a9f09d
- (void)_makeExtraVars;	// 0x31a9ee65
- (id)_markerAndPositiveExtraVar;	// 0x31a9c409
- (id)_negativeExtraVar;	// 0x31a9c45d
- (BOOL)_nsib_isRedundant;	// 0x31a9f955
- (BOOL)_nsib_isRedundantInEngine:(id)engine;	// 0x31a9f539
- (int)_primitiveConstraintType;	// 0x31a9c4dd
- (id)_priorityDescription;	// 0x31a9d725
- (void)_removeFromEngine:(id)engine;	// 0x31a9ed21
- (void)_setDeferDTraceLogging:(BOOL)logging;	// 0x31a9c4c5
- (void)_setFirstAttribute:(int)attribute;	// 0x31a9b869
- (void)_setFirstItem:(id)item;	// 0x31aa00d1
- (void)_setIdentifier:(id)identifier;	// 0x31a9bfd9
- (void)_setMarkerAndPositiveErrorVar:(id)var;	// 0x31a9c419
- (void)_setMultiplier:(float)multiplier;	// 0x31a9b9ed
- (void)_setNegativeExtraVar:(id)var;	// 0x31a9c46d
- (void)_setPrimitiveConstraintType:(int)type;	// 0x31a9c509
- (void)_setRelation:(int)relation;	// 0x31a9b92d
- (void)_setSecondAttribute:(int)attribute;	// 0x31a9bb4d
- (void)_setSecondItem:(id)item;	// 0x31aa00fd
- (void)_setSymbolicConstant:(id)constant;	// 0x31a9cda1
- (void)_setSymbolicConstant:(id)constant constant:(float)constant2;	// 0x31a9c8a1
- (id)_symbolicConstant;	// 0x31a9cd01
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(id)undoHandler;	// 0x31a9c58d
// converted property getter: - (id)animations;	// 0x31a9c149
- (id)asciiArtDescription;	// 0x31a9d2e5
// declared property getter: - (float)constant;	// 0x31a9cc31
// declared property getter: - (id)container;	// 0x31a9c53d
- (void)dealloc;	// 0x31a9cf55
- (id)description;	// 0x31a9db6d
- (id)descriptionAccessory;	// 0x31a9d7a5
- (void)encodeWithCoder:(id)coder;	// 0x31a9df01
- (id)equationDescription;	// 0x31a9d7a9
// declared property getter: - (int)firstAttribute;	// 0x31a9b859
// declared property getter: - (id)firstItem;	// 0x31aa00bd
// declared property getter: - (BOOL)hasBeenLowered;	// 0x31a9bf21
// declared property getter: - (id)identifier;	// 0x31a9c129
// declared property getter: - (float)multiplier;	// 0x31a9b9dd
- (float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)marker;	// 0x31a9c3ed
- (id)nsis_descriptionOfVariable:(id)variable;	// 0x31a9f3bd
- (BOOL)nsis_shouldIntegralizeVariable:(id)variable;	// 0x31a9c401
- (void)nsis_valueOfVariable:(id)variable didChangeInEngine:(id)engine;	// 0x31a9c3fd
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)variableIsUserObservable;	// 0x31a9c405
// declared property getter: - (float)priority;	// 0x31a9bc29
- (float)priorityForVariable:(id)variable;	// 0x31a9ea6d
// declared property getter: - (int)relation;	// 0x31a9b915
// declared property getter: - (int)secondAttribute;	// 0x31a9bb39
// declared property getter: - (id)secondItem;	// 0x31aa00e9
// converted property setter: - (void)setAnimations:(id)animations;	// 0x31a9c159
// declared property setter: - (void)setConstant:(float)constant;	// 0x31a9cced
// declared property setter: - (void)setContainer:(id)container;	// 0x31a9c561
- (void)setHasBeenLowered:(BOOL)lowered;	// 0x31a9bf35
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x31a9c139
// declared property setter: - (void)setPriority:(float)priority;	// 0x31a9bc39
// declared property setter: - (void)setShouldBeArchived:(BOOL)beArchived;	// 0x31a9bc11
// declared property setter: - (void)setSymbolicConstant:(id)constant;	// 0x31a9ceed
// declared property getter: - (BOOL)shouldBeArchived;	// 0x31a9bbfd
// declared property getter: - (id)symbolicConstant;	// 0x31a9cedd
@end
