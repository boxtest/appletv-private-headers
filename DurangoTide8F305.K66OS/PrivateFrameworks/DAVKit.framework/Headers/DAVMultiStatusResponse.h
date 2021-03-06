/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL;

@interface DAVMultiStatusResponse : NSObject {
	NSURL *href;	// 4 = 0x4
	NSString *responseDescription;	// 8 = 0x8
	int statusCode;	// 12 = 0xc
}
@property(readonly, retain) NSURL *href;	// G=0x300847fd; converted property
@property(readonly, retain) NSString *responseDescription;	// G=0x3008481d; converted property
@property(readonly, assign) int statusCode;	// G=0x3008480d; converted property
- (id)init;	// 0x300848fd
- (id)initWithXMLNode:(id)xmlnode;	// 0x3008515d
- (void)dealloc;	// 0x30085101
- (BOOL)handleResponseSubnode:(id)subnode;	// 0x3008482d
// converted property getter: - (id)href;	// 0x300847fd
// converted property getter: - (id)responseDescription;	// 0x3008481d
// converted property getter: - (int)statusCode;	// 0x3008480d
@end

