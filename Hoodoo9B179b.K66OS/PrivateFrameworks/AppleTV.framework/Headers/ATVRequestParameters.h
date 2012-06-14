/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVRequestParameters : NSObject {
@private
	NSURL *_url;	// 4 = 0x4
	NSString *_method;	// 8 = 0x8
	NSDictionary *_headers;	// 12 = 0xc
	NSData *_body;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSData *body;	// G=0x3018761d; @synthesize=_body
@property(readonly, assign, nonatomic) NSDictionary *headers;	// G=0x3018760d; @synthesize=_headers
@property(readonly, assign, nonatomic) NSString *method;	// G=0x301875fd; @synthesize=_method
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x301875ed; @synthesize=_url
- (id)initWithURL:(id)url method:(id)method headers:(id)headers body:(id)body;	// 0x301874b1
// declared property getter: - (id)body;	// 0x3018761d
- (void)dealloc;	// 0x30187565
// declared property getter: - (id)headers;	// 0x3018760d
// declared property getter: - (id)method;	// 0x301875fd
// declared property getter: - (id)url;	// 0x301875ed
@end
