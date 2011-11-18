/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class NSArray;

@interface ASGetOptionsTask : ASTask {
	NSArray *_versionArray;	// 104 = 0x68
	NSArray *_commandArray;	// 108 = 0x6c
}
@property(retain) NSArray *commandArray;	// G=0x341f8565; S=0x341f8575; converted property
@property(retain) NSArray *versionArray;	// G=0x341f8511; S=0x341f8521; converted property
+ (void)__setUsePort:(BOOL)port;	// 0x341f7c7d
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x341f7c9d
- (id)_url;	// 0x341f7ded
// converted property getter: - (id)commandArray;	// 0x341f8565
- (int)commandCode;	// 0x341f7ca1
- (int)connectionActionForResponse:(id)response;	// 0x341f7cad
- (void)dealloc;	// 0x341f84b1
- (BOOL)expectsWBXML;	// 0x341f7ca9
- (void)finishWithError:(id)error;	// 0x341f7f81
- (id)httpMethod;	// 0x341f7c8d
- (BOOL)processContext:(id)context;	// 0x341f7d2d
- (id)requestBody;	// 0x341f7c99
- (BOOL)requiresEASVersionInformaton;	// 0x341f85b9
// converted property setter: - (void)setCommandArray:(id)array;	// 0x341f8575
// converted property setter: - (void)setVersionArray:(id)array;	// 0x341f8521
// converted property getter: - (id)versionArray;	// 0x341f8511
@end

