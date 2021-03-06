/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSError.h> // Unknown library


@interface NSError (MCExtension)
+ (id)MCErrorWithDomain:(id)domain code:(int)code description:(id)description errorType:(id)type;	// 0x32afdc39
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array errorType:(id)type;	// 0x32afdbfd
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array suggestion:(id)suggestion USEnglishSuggestion:(id)suggestion5 underlyingError:(id)error errorType:(id)type;	// 0x32afe281
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array underlyingError:(id)error errorType:(id)type;	// 0x32afdbbd
- (BOOL)MCContainsErrorDomain:(id)domain code:(int)code;	// 0x32afd985
- (id)MCErrorType;	// 0x32afd8fd
- (id)MCFindPrimaryError;	// 0x32afdae9
- (id)MCMakePrimaryError;	// 0x32afda21
- (id)MCUSEnglishDescription;	// 0x32afd959
- (id)MCUSEnglishSuggestion;	// 0x32afd92d
- (id)MCVerboseDescription;	// 0x32afdcd9
@end

