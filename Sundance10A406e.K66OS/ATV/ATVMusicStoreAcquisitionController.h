/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "BRSecureResource.h"

@class BRWaitPromptControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreAcquisitionController : BRController <BRSecureResource> {
	NSDictionary *_offer;	// 100 = 0x64
	BRWaitPromptControl *_waitPrompt;	// 104 = 0x68
}
- (id)initWithOffer:(id)offer;	// 0x1d4d39
- (void)_acquire;	// 0x1d5129
- (void)_acquisitionFailed:(id)failed;	// 0x1d5441
- (BOOL)_attemptPlaybackInsteadOfAcquistion;	// 0x1d57b5
- (void)_dismiss:(id)dismiss;	// 0x1d55e9
- (void)_dismissAfterPlayerIsPushed;	// 0x1d5665
- (void)_enablePrompt:(id)prompt;	// 0x1d533d
- (void)_mediaPlayerControllerPushed:(id)pushed;	// 0x1d56dd
- (void)_purchaseAcquired:(id)acquired;	// 0x1d542d
- (void)_rentalAcquired:(id)acquired;	// 0x1d5391
- (void)_startPlaybackForForAcquisition:(id)acquisition;	// 0x1d5739
- (void)dealloc;	// 0x1d4f31
- (id)secureResourceAuthenticator;	// 0x1d4fad
- (void)wasPopped;	// 0x1d50cd
- (void)wasPushed;	// 0x1d509d
@end
