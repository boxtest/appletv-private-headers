/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <BasicAccount.h> // Unknown library


@interface BasicAccount (DAChildAccountExtensions)
- (id)childAccountPropertiesArrayBySettingChildProperties:(id)properties forChildAccountType:(id)childAccountType;	// 0x31ebb58d
- (id)childPropertiesForAccountType:(id)accountType defaultProperties:(id)properties outParentNeedsSave:(BOOL *)save;	// 0x31ebb4ad
@end

@interface BasicAccount (DAMMeExtras)
- (BOOL)isValidDAMMeAccount;	// 0x31ec380d
- (id)subscribedCalendarRecords;	// 0x31ec38c1
@end

@interface BasicAccount (DAIMAPNotesExtensions)
- (BOOL)accountClassStringIsIMAPSubclass;	// 0x31ec741d
- (BOOL)accountTypeStringIsIMAPSubclass;	// 0x31ec7375
- (BOOL)accountTypeStringOwnsIMAPChild;	// 0x31ec74ed
- (BOOL)isValidIMAPNotesAccount;	// 0x31ec756d
@end

@interface BasicAccount (DACalDAVChildExtensions)
- (BOOL)accountPropertiesHaveCalDAVEnabled:(id)enabled;	// 0x31ec7f99
- (BOOL)accountTypeStringCanOwnCalDAVAccounts;	// 0x31ec7ef1
- (BOOL)isValidCalDAVChildAccount;	// 0x31ec805d
@end

@interface BasicAccount (DACardDAVChildExtensions)
- (BOOL)accountPropertiesHaveCardDAVEnabled:(id)enabled;	// 0x31ec8279
- (BOOL)accountTypeStringCanOwnCardDAVAccounts;	// 0x31ec8211
- (BOOL)isValidCardDAVChildAccount;	// 0x31ec8309
@end

@interface BasicAccount (BookmarkDAVChildExtensions)
- (BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)enabled;	// 0x31ecd9e9
- (BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;	// 0x31ecd9a9
- (BOOL)isValidBookmarkDAVChildAccount;	// 0x31ecda79
@end

