/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@protocol NSObject, NSCoding;

@interface MSObjectWrapper : NSObject {
	long long _size;	// 4 = 0x4
	long long _uniqueID;	// 12 = 0xc
	id<NSObject, NSCoding> _object;	// 20 = 0x14
	int _errorCount;	// 24 = 0x18
}
@property(assign, nonatomic) int errorCount;	// G=0x3075da3d; S=0x3075da4d; @synthesize=_errorCount
@property(readonly, assign, nonatomic) id<NSCoding> object;	// G=0x3075da2d; @synthesize=_object
@property(assign, nonatomic) long long size;	// G=0x3075d9d5; S=0x3075d9ed; @synthesize=_size
@property(assign, nonatomic) long long uniqueID;	// G=0x3075da01; S=0x3075da19; @synthesize=_uniqueID
+ (int)indexOfObject:(id)object inWrapperArray:(id)wrapperArray;	// 0x3075d685
+ (id)objectsFromWrappers:(id)wrappers;	// 0x3075d745
+ (id)objectsFromWrappers:(id)wrappers equalToObject:(id)object;	// 0x3075d869
+ (id)wrapperWithObject:(id)object size:(long long)size;	// 0x3075d5a1
- (id)initWithObject:(id)object size:(long long)size;	// 0x3075d5fd
- (void).cxx_destruct;	// 0x3075da5d
// declared property getter: - (int)errorCount;	// 0x3075da3d
// declared property getter: - (id)object;	// 0x3075da2d
// declared property setter: - (void)setErrorCount:(int)count;	// 0x3075da4d
// declared property setter: - (void)setSize:(long long)size;	// 0x3075d9ed
// declared property setter: - (void)setUniqueID:(long long)anId;	// 0x3075da19
// declared property getter: - (long long)size;	// 0x3075d9d5
// declared property getter: - (long long)uniqueID;	// 0x3075da01
@end

