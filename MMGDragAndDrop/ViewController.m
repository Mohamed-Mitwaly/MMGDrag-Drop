//
//  ViewController.m
//  MMGDragAndDrop
//
//  Created by Mohamed Mitwaly on 7/20/14.
//  Copyright (c) 2014 MMG. All rights reserved.
//

#import "ViewController.h"
#import "MMGDrag_Drop.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [[MMGDrag_Drop getInstance] arrayOfViewsToBeDraggedAndDrop:[NSArray arrayWithObjects:_mainImageView,_secondImageView,_testView, nil] onView:self.view];
}
@end
