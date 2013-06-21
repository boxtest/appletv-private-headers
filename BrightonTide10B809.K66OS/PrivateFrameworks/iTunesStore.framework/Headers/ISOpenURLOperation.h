/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {
	ISOpenURLRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) ISOpenURLRequest *openURLRequest;	// G=0x3689a239; 
- (id)init;	// 0x3689a0e1
- (id)initWithOpenURLRequest:(id)openURLRequest;	// 0x3689a0f5
- (id)_newSortedTargetsArray;	// 0x3689a5dd
- (BOOL)_openURL:(id)url;	// 0x3689a6b1
- (void)dealloc;	// 0x3689a1ed
// declared property getter: - (id)openURLRequest;	// 0x3689a239
- (void)run;	// 0x3689a271
@end
