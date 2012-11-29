/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PTPInitCommandACKPacket : NSObject {
	unsigned long _connectionNumber;	// 4 = 0x4
	unsigned char _responderGUID[16];	// 8 = 0x8
	NSString *_responderFriendlyName;	// 24 = 0x18
}
@property(assign) unsigned long connectionNumber;	// G=0x35af59b9; S=0x35af59c9; converted property
@property(retain) NSString *responderFriendlyName;	// G=0x35af5abd; S=0x35af5acd; converted property
- (id)initWithConnectionNumber:(unsigned long)connectionNumber responderGUID:(char *)guid responderFriendlyName:(id)name;	// 0x35af5609
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x35af56c9
// converted property getter: - (unsigned long)connectionNumber;	// 0x35af59b9
- (id)contentForTCP;	// 0x35af57a9
- (void)dealloc;	// 0x35af575d
- (id)description;	// 0x35af5881
// converted property getter: - (id)responderFriendlyName;	// 0x35af5abd
- (const char *)responderGUID;	// 0x35af59d9
- (id)responderGUIDString;	// 0x35af59e9
// converted property setter: - (void)setConnectionNumber:(unsigned long)number;	// 0x35af59c9
// converted property setter: - (void)setResponderFriendlyName:(id)name;	// 0x35af5acd
- (void)setResponderGUID:(char *)guid;	// 0x35af5aa1
@end
