/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSSendEmail : MSMailDefaultService {
}
+ (id)sendEmail:(id)email delegate:(id)delegate;	// 0x31f12225
+ (id)smi_serverCommandName;	// 0x31f12219
- (id)_didSendEmail:(id)email userInfo:(id)info;	// 0x31f12439
- (id)_sendEmail:(id)email delegate:(id)delegate;	// 0x31f122c1
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x31f12571
@end
