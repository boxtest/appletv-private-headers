/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface _UIDynamicAnimationActiveValue : NSObject {
@private
	double _value;	// 4 = 0x4
	double _minimumActiveValue;	// 12 = 0xc
	double _maximumActiveValue;	// 20 = 0x14
	int _type;	// 28 = 0x1c
	double _boundaryPull;	// 32 = 0x20
	id _applier;	// 40 = 0x28
	unsigned _lowerBoundary : 1;	// 44 = 0x2c
	unsigned _upperBoundary : 1;	// 44 = 0x2c
}
@property(assign, nonatomic) double maximumActiveValue;	// G=0x35a22165; S=0x35a21c11; @synthesize=_maximumActiveValue
@property(assign, nonatomic) double minimumActiveValue;	// G=0x35a2214d; S=0x35a21b8d; @synthesize=_minimumActiveValue
@property(assign, nonatomic) int type;	// G=0x35a2217d; S=0x35a21c95; @synthesize=_type
@property(assign, nonatomic) double value;	// G=0x35a22135; S=0x35a21b19; @synthesize=_value
+ (id)activeValue:(double)value ofType:(int)type;	// 0x35a2192d
+ (id)lowerBoundary:(double)boundary ofType:(int)type;	// 0x35a21875
+ (id)upperBoundary:(double)boundary ofType:(int)type;	// 0x35a218d1
- (id)init;	// 0x35a21991
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x35a21d69
- (id)_applier;	// 0x35a21a75
- (double)_boundaryPull;	// 0x35a21d15
- (BOOL)_isLowerBoundary;	// 0x35a21d41
- (BOOL)_isUpperBoundary;	// 0x35a21d55
- (void)_setBoundaryPull:(double)pull;	// 0x35a21d2d
- (void)dealloc;	// 0x35a21a29
- (id)description;	// 0x35a220f5
// declared property getter: - (double)maximumActiveValue;	// 0x35a22165
// declared property getter: - (double)minimumActiveValue;	// 0x35a2214d
// declared property setter: - (void)setMaximumActiveValue:(double)value;	// 0x35a21c11
// declared property setter: - (void)setMinimumActiveValue:(double)value;	// 0x35a21b8d
// declared property setter: - (void)setType:(int)type;	// 0x35a21c95
// declared property setter: - (void)setValue:(double)value;	// 0x35a21b19
// declared property getter: - (int)type;	// 0x35a2217d
// declared property getter: - (double)value;	// 0x35a22135
@end
