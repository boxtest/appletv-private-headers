/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {
	BOOL _canPause;	// 4 = 0x4
	double _changeRate;	// 8 = 0x8
	long long _currentValue;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
	double _estimatedTimeRemaining;	// 28 = 0x1c
	long long _maxValue;	// 36 = 0x24
	long long _normalizedCurrentValue;	// 44 = 0x2c
	long long _normalizedMaxValue;	// 52 = 0x34
	int _operationType;	// 60 = 0x3c
	NSMutableArray *_snapshotTimes;	// 64 = 0x40
	NSMutableArray *_snapshotValues;	// 68 = 0x44
	int _units;	// 72 = 0x48
}
@property(assign) BOOL canPause;	// G=0x354b9e5d; S=0x354ba649; 
@property(assign) double changeRate;	// G=0x354b9f2d; S=0x354ba6c9; 
@property(assign) long long currentValue;	// G=0x354ba01d; S=0x354ba761; 
@property(assign) double estimatedTimeRemaining;	// G=0x354ba101; S=0x354ba7f9; 
@property(assign) long long maxValue;	// G=0x354ba1f5; S=0x354ba891; 
@property(assign) long long normalizedCurrentValue;	// G=0x354ba2d9; S=0x354ba929; 
@property(assign) long long normalizedMaxValue;	// G=0x354ba3d5; S=0x354ba9c1; 
@property(assign) int operationType;	// G=0x354ba4d1; S=0x354baa59; 
@property(assign) int units;	// G=0x354bad5d; S=0x354baad9; 
- (id)init;	// 0x354b9b71
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354bb1e5
- (void)_updateStatisticsFromSnapshots;	// 0x354bb381
// declared property getter: - (BOOL)canPause;	// 0x354b9e5d
// declared property getter: - (double)changeRate;	// 0x354b9f2d
- (id)copyWithZone:(NSZone *)zone;	// 0x354b9c89
- (id)copyXPCEncoding;	// 0x354bb095
// declared property getter: - (long long)currentValue;	// 0x354ba01d
- (void)dealloc;	// 0x354b9c15
- (id)description;	// 0x354bae29
// declared property getter: - (double)estimatedTimeRemaining;	// 0x354ba101
// declared property getter: - (long long)maxValue;	// 0x354ba1f5
// declared property getter: - (long long)normalizedCurrentValue;	// 0x354ba2d9
// declared property getter: - (long long)normalizedMaxValue;	// 0x354ba3d5
// declared property getter: - (int)operationType;	// 0x354ba4d1
- (void)resetSnapshots;	// 0x354ba59d
// declared property setter: - (void)setCanPause:(BOOL)pause;	// 0x354ba649
// declared property setter: - (void)setChangeRate:(double)rate;	// 0x354ba6c9
// declared property setter: - (void)setCurrentValue:(long long)value;	// 0x354ba761
// declared property setter: - (void)setEstimatedTimeRemaining:(double)remaining;	// 0x354ba7f9
// declared property setter: - (void)setMaxValue:(long long)value;	// 0x354ba891
// declared property setter: - (void)setNormalizedCurrentValue:(long long)value;	// 0x354ba929
// declared property setter: - (void)setNormalizedMaxValue:(long long)value;	// 0x354ba9c1
// declared property setter: - (void)setOperationType:(int)type;	// 0x354baa59
// declared property setter: - (void)setUnits:(int)units;	// 0x354baad9
- (void)snapshot;	// 0x354bab59
// declared property getter: - (int)units;	// 0x354bad5d
@end
