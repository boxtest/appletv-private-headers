/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@protocol NSObject, NSCoding;

@interface MSObjectWrapper : NSObject {
@private
	long long _size;	// 4 = 0x4
	long long _uniqueID;	// 12 = 0xc
	id<NSObject, NSCoding> _object;	// 20 = 0x14
	int _errorCount;	// 24 = 0x18
}
@property(assign, nonatomic) int errorCount;	// G=0x339aae35; S=0x339aae45; @synthesize=_errorCount
@property(readonly, assign, nonatomic) id<NSCoding> object;	// G=0x339aae25; @synthesize=_object
@property(assign, nonatomic) long long size;	// G=0x339aadcd; S=0x339aade5; @synthesize=_size
@property(assign, nonatomic) long long uniqueID;	// G=0x339aadf9; S=0x339aae11; @synthesize=_uniqueID
+ (int)indexOfObject:(id)object inWrapperArray:(id)wrapperArray;	// 0x339aaa7d
+ (id)objectsFromWrappers:(id)wrappers;	// 0x339aab3d
+ (id)objectsFromWrappers:(id)wrappers equalToObject:(id)object;	// 0x339aac61
+ (id)wrapperWithObject:(id)object size:(long long)size;	// 0x339aa999
- (id)initWithObject:(id)object size:(long long)size;	// 0x339aa9f5
- (void).cxx_destruct;	// 0x339aae55
// declared property getter: - (int)errorCount;	// 0x339aae35
// declared property getter: - (id)object;	// 0x339aae25
// declared property setter: - (void)setErrorCount:(int)count;	// 0x339aae45
// declared property setter: - (void)setSize:(long long)size;	// 0x339aade5
// declared property setter: - (void)setUniqueID:(long long)anId;	// 0x339aae11
// declared property getter: - (long long)size;	// 0x339aadcd
// declared property getter: - (long long)uniqueID;	// 0x339aadf9
@end
