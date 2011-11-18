/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

#import "SSPlayInfoRequestDelegate.h"
#import <NSObject.h> // Unknown library
#import "MediaToolbox-Structs.h"

@class SSPlayInfoRequest;

@interface FPAPSSPlayInfoRequestHandler : NSObject <SSPlayInfoRequestDelegate> {
@private
	OpaqueFigPlayer *_player;	// 4 = 0x4
	SSPlayInfoRequest *_playInfoRequest;	// 8 = 0x8
}
- (id)init;	// 0x3257fb4d
- (void)dealloc;	// 0x3257fd11
- (void)playInfoRequest:(id)request didReceiveResponse:(id)response;	// 0x3257fb49
- (void)request:(id)request didFailWithError:(id)error;	// 0x3257fc41
- (void)requestDidFinish:(id)request;	// 0x3257fb99
- (void)setPlayer:(OpaqueFigPlayer *)player;	// 0x3257fb39
- (void)setRequest:(id)request;	// 0x3257fcd1
@end

