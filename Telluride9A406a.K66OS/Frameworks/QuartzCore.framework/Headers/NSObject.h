/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface NSObject (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x33e65c69
- (void)CA_prepareRenderValue;	// 0x33e8c055
@end

@interface NSObject (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x33f146d5
- (float)CA_distanceToValue:(id)value;	// 0x33f148ad
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x33f14785
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x33f14619
@end

@interface NSObject (_CAObjectInternal)
+ (id)CA_CAMLPropertyForKey:(id)key;	// 0x33f1aeed
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x33f1aee9
+ (BOOL)CA_encodePropertyConditionally:(unsigned)conditionally type:(int)type;	// 0x33e85721
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x33f1aee5
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x33f1aee1
@end
