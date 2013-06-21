/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappableWithDefault.h"
#import <NSObject.h> // Unknown library


@interface GQDSStyle : NSObject <GQDNameMappableWithDefault> {
	GQDSStyle *mParent;	// 4 = 0x4
	GQDSMapRef mPropertyMap;	// 8 = 0x8
}
@property(retain) id parent;	// G=0x368be289; S=0x368be299; converted property
+ (id)createReplacementForMissingObject:(xmlTextReader *)missingObject processor:(id)processor;	// 0x368bdf89
+ (id)createReplacementForMissingStyleOfType:(int)type;	// 0x368bda9d
+ (GQDSMapRef)defaultMapForStyleType:(int)styleType;	// 0x368bdb15
+ (const StateSpec *)stateForReading;	// 0x368bdb05
+ (int)styleTypeForNodeName:(const char *)nodeName;	// 0x368be071
- (void)dealloc;	// 0x368be215
- (BOOL)hasValueForBoolProperty:(int)boolProperty value:(BOOL *)value;	// 0x368be2fd
- (BOOL)hasValueForBoolProperty:(int)boolProperty value:(BOOL *)value wasOverriddenWithNull:(BOOL *)null;	// 0x368be321
- (BOOL)hasValueForDoubleProperty:(int)doubleProperty value:(double *)value;	// 0x368be579
- (BOOL)hasValueForDoubleProperty:(int)doubleProperty value:(double *)value wasOverriddenWithNull:(BOOL *)null;	// 0x368be59d
- (BOOL)hasValueForFloatProperty:(int)floatProperty value:(float *)value;	// 0x368be49d
- (BOOL)hasValueForFloatProperty:(int)floatProperty value:(float *)value wasOverriddenWithNull:(BOOL *)null;	// 0x368be4c1
- (BOOL)hasValueForIntProperty:(int)intProperty value:(int *)value;	// 0x368be3cd
- (BOOL)hasValueForIntProperty:(int)intProperty value:(int *)value wasOverriddenWithNull:(BOOL *)null;	// 0x368be3f1
- (BOOL)hasValueForObjectProperty:(int)objectProperty value:(id *)value;	// 0x368be649
- (BOOL)hasValueForObjectProperty:(int)objectProperty value:(id *)value wasOverriddenWithNull:(BOOL *)null;	// 0x368be66d
- (BOOL)overridesBoolProperty:(int)property value:(BOOL *)value;	// 0x368be389
- (BOOL)overridesDoubleProperty:(int)property value:(double *)value;	// 0x368be605
- (BOOL)overridesFloatProperty:(int)property value:(float *)value;	// 0x368be529
- (BOOL)overridesIntProperty:(int)property value:(int *)value;	// 0x368be459
- (BOOL)overridesObjectProperty:(int)property value:(id *)value;	// 0x368be6d5
// converted property getter: - (id)parent;	// 0x368be289
// converted property setter: - (void)setParent:(id)parent;	// 0x368be299
- (void)setPropertyMap:(GQDSMapRef)map;	// 0x368be279
- (BOOL)valueForBoolProperty:(int)boolProperty;	// 0x368be2d5
- (double)valueForDoubleProperty:(int)doubleProperty;	// 0x368be549
- (float)valueForFloatProperty:(int)floatProperty;	// 0x368be479
- (int)valueForIntProperty:(int)intProperty;	// 0x368be3a9
- (id)valueForObjectProperty:(int)objectProperty;	// 0x368be625
@end
