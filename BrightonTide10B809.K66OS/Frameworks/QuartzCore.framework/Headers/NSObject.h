/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface NSObject (CARenderValue)
- (Object *)CA_copyRenderValue;	// 0x3290cd05
- (void)CA_prepareRenderValue;	// 0x329301e5
@end

@interface NSObject (CAAnimatableValue)
- (id)CA_addValue:(id)value multipliedBy:(int)by;	// 0x329d4799
- (float)CA_distanceToValue:(id)value;	// 0x329d4bf5
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x329d485d
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x329d4b15
@end

@interface NSObject (_CAObjectInternal)
+ (id)CA_CAMLPropertyForKey:(id)key;	// 0x329e4319
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x329e4315
+ (BOOL)CA_encodesPropertyConditionally:(unsigned)conditionally type:(int)type;	// 0x3292c541
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x329e430d
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x329e4309
@end
