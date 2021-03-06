/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVRequestLogger : NSObject {
	id<CoreDAVAccountInfoProvider> _provider;	// 4 = 0x4
	NSArray *_responseHeadersSortDescriptors;	// 8 = 0x8
}
@property(retain) NSArray *responseHeadersSortDescriptors;	// G=0x317aeaf1; S=0x317aeb09; @synthesize=_responseHeadersSortDescriptors
- (id)initWithProvider:(id)provider;	// 0x317adc1d
- (void)dealloc;	// 0x317adbc5
- (void)finishCoreDAVResponse;	// 0x317added
- (void)logCoreDAVRequest:(id)request;	// 0x317ae5e1
- (void)logCoreDAVResponseHeaders:(id)headers andStatusCode:(int)code;	// 0x317ae155
- (void)logCoreDAVResponseSnippet:(id)snippet;	// 0x317adf9d
// declared property getter: - (id)responseHeadersSortDescriptors;	// 0x317aeaf1
// declared property setter: - (void)setResponseHeadersSortDescriptors:(id)descriptors;	// 0x317aeb09
@end

