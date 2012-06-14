/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMArchiveManager.h"

@class NSMutableString, NSMutableDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface CMProgressiveArchiveManager : CMArchiveManager {
@private
	void *mClient;	// 40 = 0x28
	XXStruct_1D5yyA *mCallBacks;	// 44 = 0x2c
	NSMutableDictionary *mDataCache;	// 48 = 0x30
	NSMutableDictionary *mStyleCache;	// 52 = 0x34
	NSMutableString *mCssString;	// 56 = 0x38
	BOOL mMainDataInited;	// 60 = 0x3c
	NSDate *mStartDate;	// 64 = 0x40
	NSDate *mLastCommitDate;	// 68 = 0x44
	NSMutableString *mHtmlLogString;	// 72 = 0x48
}
- (id)initWithClient:(const void *)client andCallBacks:(XXStruct_1D5yyA *)backs;	// 0x328c2d19
- (id)addCssStyle:(id)style;	// 0x328214ed
- (void)addCssStyle:(id)style withName:(id)name;	// 0x32b16ee9
- (void)closeResourceAtPath:(id)path;	// 0x328a8f41
- (void)commitDataAtPath:(id)path;	// 0x32825a51
- (id)createResourceWithName:(id)name;	// 0x328ae6f9
- (id)cssStylesheetString;	// 0x3291cab5
- (void)dealloc;	// 0x328adde9
- (BOOL)isCancelled;	// 0x32825cd5
- (BOOL)isProgressive;	// 0x32824ed1
- (void)pushCssToPath:(id)path;	// 0x32824ed5
- (void)pushData:(id)data toPath:(id)path;	// 0x3282505d
- (void)pushText:(id)text toPath:(id)path;	// 0x32824fe9
@end
