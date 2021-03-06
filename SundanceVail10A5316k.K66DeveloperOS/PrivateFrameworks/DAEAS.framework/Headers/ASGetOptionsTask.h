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
@property(retain) NSArray *commandArray;	// G=0x3098d7bd; S=0x3098d7cd; converted property
@property(retain) NSArray *versionArray;	// G=0x3098d769; S=0x3098d779; converted property
+ (void)__setUsePort:(BOOL)port;	// 0x3098cf11
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x3098cf31
- (id)_url;	// 0x3098d07d
// converted property getter: - (id)commandArray;	// 0x3098d7bd
- (int)commandCode;	// 0x3098cf35
- (int)connectionActionForResponse:(id)response;	// 0x3098cf41
- (void)dealloc;	// 0x3098d705
- (BOOL)expectsWBXML;	// 0x3098cf3d
- (void)finishWithError:(id)error;	// 0x3098d20d
- (id)httpMethod;	// 0x3098cf21
- (BOOL)processContext:(id)context;	// 0x3098cfc1
- (id)requestBody;	// 0x3098cf2d
- (BOOL)requiresEASVersionInformaton;	// 0x3098d811
// converted property setter: - (void)setCommandArray:(id)array;	// 0x3098d7cd
// converted property setter: - (void)setVersionArray:(id)array;	// 0x3098d779
// converted property getter: - (id)versionArray;	// 0x3098d769
@end

