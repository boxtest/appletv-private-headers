/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBCharacteristic.h"

@class CBConcretePeripheral, NSNumber;

@interface CBConcreteCharacteristic : CBCharacteristic {
	CBConcretePeripheral *_peripheral;	// 28 = 0x1c
	NSNumber *_handle;	// 32 = 0x20
	NSNumber *_valueHandle;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSNumber *handle;	// G=0x30eccc91; @synthesize=_handle
@property(readonly, assign, nonatomic) CBConcretePeripheral *peripheral;	// G=0x30eccc81; @synthesize=_peripheral
@property(readonly, assign, nonatomic) NSNumber *valueHandle;	// G=0x30eccca1; @synthesize=_valueHandle
- (id)initWithService:(id)service UUID:(id)uuid properties:(int)properties peripheral:(id)peripheral handle:(id)handle valueHandle:(id)handle6;	// 0x30ecc5cd
- (void)dealloc;	// 0x30ecc6dd
// declared property getter: - (id)handle;	// 0x30eccc91
- (id)handleDescriptorsDiscovered:(id)discovered;	// 0x30ecca0d
- (id)handleValueBroadcasted:(id)broadcasted;	// 0x30ecc97d
- (id)handleValueNotifying:(id)notifying;	// 0x30ecc9c5
- (id)handleValueUpdated:(id)updated;	// 0x30ecc87d
- (id)handleValueWritten:(id)written;	// 0x30ecc909
- (void)invalidate;	// 0x30ecc781
// declared property getter: - (id)peripheral;	// 0x30eccc81
// declared property getter: - (id)valueHandle;	// 0x30eccca1
@end
