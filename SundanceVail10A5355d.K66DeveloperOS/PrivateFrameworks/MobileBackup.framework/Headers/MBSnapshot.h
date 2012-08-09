/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "MobileBackup-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSString;

@interface MBSnapshot : NSObject <NSCopying, NSCoding> {
	unsigned _snapshotID;	// 4 = 0x4
	NSString *_deviceName;	// 8 = 0x8
	NSDate *_date;	// 12 = 0xc
	int _state;	// 16 = 0x10
	BOOL _isCompatible;	// 20 = 0x14
	NSString *_systemVersion;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x30462a79; @synthesize=_date
@property(readonly, assign, nonatomic) NSString *deviceName;	// G=0x30462a99; @synthesize=_deviceName
@property(readonly, assign, nonatomic) BOOL isCompatible;	// G=0x30462aa9; @synthesize=_isCompatible
@property(readonly, assign, nonatomic) unsigned snapshotID;	// G=0x30462a89; @synthesize=_snapshotID
@property(readonly, assign, nonatomic) int state;	// G=0x30462a69; @synthesize=_state
@property(readonly, assign, nonatomic) NSString *systemVersion;	// G=0x30462a59; @synthesize=_systemVersion
- (id)initWithCoder:(id)coder;	// 0x304625e9
- (id)initWithSnapshotID:(unsigned)snapshotID deviceName:(id)name date:(id)date state:(int)state isCompatible:(BOOL)compatible systemVersion:(id)version;	// 0x30462521
- (id)copyWithZone:(NSZone *)zone;	// 0x304628e9
// declared property getter: - (id)date;	// 0x30462a79
- (void)dealloc;	// 0x30462871
- (id)description;	// 0x30462991
// declared property getter: - (id)deviceName;	// 0x30462a99
- (void)encodeWithCoder:(id)coder;	// 0x30462745
// declared property getter: - (BOOL)isCompatible;	// 0x30462aa9
// declared property getter: - (unsigned)snapshotID;	// 0x30462a89
// declared property getter: - (int)state;	// 0x30462a69
// declared property getter: - (id)systemVersion;	// 0x30462a59
@end
