//
//  NSMutableArray+BEKit.h
//  BEKit
//
//  Created by sundanlong on 16/4/11.
//
//

@import Foundation;

@interface NSMutableArray (BEKit)

- (void)be_moveObjectFromIndex:(NSUInteger)from
                    toIndex:(NSUInteger)to;

- (NSMutableArray * _Nonnull)be_reversedArray;

+ (NSMutableArray * _Nonnull)be_sortArrayByKey:(NSString * _Nonnull)key
                                      array:(NSMutableArray * _Nonnull)array
                                  ascending:(BOOL)ascending;

@end
