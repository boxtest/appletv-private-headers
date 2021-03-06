/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class AlertInfo;

__attribute__((visibility("hidden")))
@interface ActionManager : NSObject {
@private
	AlertInfo *mAlertInfo;	// 4 = 0x4
}
+ (void)cleanup;	// 0x343c08f4
+ (id)instance;	// 0x343c0930
- (id)init;	// 0x343c0858
- (id)alertMessage;	// 0x343c0c74
- (id)alertType;	// 0x343c0cfc
- (id)alertUrlString;	// 0x343c0c0c
- (void)dealloc;	// 0x343c1fa0
- (id)getAlert;	// 0x343c0cb4
- (id)getDictionary;	// 0x343c0b40
- (BOOL)haveAlert;	// 0x343c0838
- (void)registerAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x343c13e8
- (void)registerAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x343c12c8
- (void)registerAlertByPriority:(id)priority;	// 0x343c1db8
- (void)registerBadCredentialsErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x343c1848
- (void)registerBadCredentialsErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x343c1728
- (void)registerErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x343c1618
- (void)registerErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x343c14f8
- (void)registerFatalErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x343c1ca8
- (void)registerFatalErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x343c1b88
- (void)registerNoNetworkErrorAlert:(id)alert error:(unsigned)error priority:(unsigned)priority;	// 0x343c1a78
- (void)registerNoNetworkErrorAlert:(id)alert error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x343c1958
- (void)registerUrlAlert:(id)alert urlStr:(id)str error:(unsigned)error priority:(unsigned)priority;	// 0x343c11a0
- (void)registerUrlAlert:(id)alert urlStr:(id)str error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x343c1068
- (void)registerUrlAlert:(id)alert urlStr:(id)str urlLabel:(id)label error:(unsigned)error priority:(unsigned)priority;	// 0x343c0f28
- (void)registerUrlAlert:(id)alert urlStr:(id)str urlLabel:(id)label error:(unsigned)error status:(unsigned)status priority:(unsigned)priority;	// 0x343c0dd8
- (void)removeAlert;	// 0x343c098c
- (id)stringActioninJson;	// 0x343c0ab0
@end

