## Design step 1: Define your goal

In order to write a successful program, you first need to define what your goal is. Ideally, you should be able to state this in a sentence or two. It is often useful to express this as a user-facing outcome. For example:

* Allow the user to organize a list of names and associated phone numbers.
* Generate randomized dungeons that will produce interesting looking caverns.
* Generate a list of stock recommendations for stocks that have high dividends.
* Model how long it takes for a ball dropped off a tower to hit the ground.
* Although this step seems obvious, it’s also highly important. The worst thing you can do is write a program that doesn’t actually do what you (or your boss) wanted!

## Design step 2: Define requirements

While defining your problem helps you determine what outcome you want, it’s still vague. The next step is to think about requirements.

Requirements is a fancy word for both the constraints that your solution needs to abide by (e.g. budget, timeline, space, memory, etc…), as well as the capabilities that the program must exhibit in order to meet the users’ needs. Note that your requirements should similarly be focused on the “what”, not the “how”.

For example:

* Phone numbers should be saved, so they can be recalled later.
* The randomized dungeon should always contain a way to get from the entrance to an exit.
* The stock recommendations should leverage historical pricing data.
* The user should be able to enter the height of the tower.
* We need a testable version within 7 days.
* The program should produce results within 10 seconds of the user submitting their request.
* The program should crash in less than 0.1% of user sessions.

A single problem may yield many requirements, and the solution isn’t “done” until it satisfies all of them.

## Design step 3: Define your tools, targets, and backup plan

When you are an experienced programmer, there are many other steps that typically would take place at this point, including:

* Defining what target architecture and/or OS your program will run on.
* Determining what set of tools you will be using.
* Determining whether you will write your program alone or as part of a team.
* Defining your testing/feedback/release strategy.
* Determining how you will back up your code.

However, as a new programmer, the answers to these questions are typically simple: You are writing a program for your own use, alone, on your own system, using an IDE you purchased or downloaded, and your code is probably not used by anybody but you. This makes things easy.

That said, if you are going to work on anything of non-trivial complexity, you should have a plan to backup your code. It’s not enough to just zip or copy the directory to another location on your machine (though this is better than nothing). If your system crashes, you’ll lose everything. A good backup strategy involves getting a copy of the code off of your system altogether. There are lots of easy ways to do this: Zip it up and email it to yourself, copy it to Dropbox or another cloud service, FTP it to another machine, copy it to another machine on your local network, or use a version control system residing on another machine or in the cloud (e.g. github). Version control systems have the added advantage of not only being able to restore your files, but also to roll them back to a previous version.

## Design step 4: Break hard problems down into easy problems

In real life, we often need to perform tasks that are very complex. Trying to figure out how to do these tasks can be very challenging. In such cases, we often make use of the top down method of problem solving. That is, instead of solving a single complex task, we break that task into multiple subtasks, each of which is individually easier to solve. If those subtasks are still too difficult to solve, they can be broken down further. By continuously splitting complex tasks into simpler ones, you can eventually get to a point where each individual task is manageable, if not trivial.

Let’s take a look at an example of this. Let’s say we want to clean our house. Our task hierarchy currently looks like this:

* Clean the house

Cleaning the entire house is a pretty big task to do in one sitting, so let’s break it into subtasks:

* Clean the house
  * Vacuum the carpets
  * Clean the bathrooms
  * Clean the kitchen

That’s more manageable, as we now have subtasks that we can focus on individually. However, we can break some of these down even further:

* Clean the house
  * Vacuum the carpets
  * Clean the bathrooms
    * Scrub the toilet (yuck!)
    * Wash the sink
  * Clean the kitchen
    * Clear the countertops
    * Clean the countertops
    * Scrub the sink
    * Take out the trash

Now we have a hierarchy of tasks, none of them particularly hard. By completing each of these relatively manageable sub-items, we can complete the more difficult overall task of cleaning the house.

The other way to create a hierarchy of tasks is to do so from the bottom up. In this method, we’ll start from a list of easy tasks, and construct the hierarchy by grouping them.

As an example, many people have to go to work or school on weekdays, so let’s say we want to solve the problem of “go to work”. If you were asked what tasks you did in the morning to get from bed to work, you might come up with the following list:

* Pick out clothes
* Get dressed
* Eat breakfast
* Drive to work
* Brush your teeth
* Get out of bed
* Prepare breakfast
* Get in your car
* Take a shower

Using the bottom up method, we can organize these into a hierarchy of items by looking for ways to group items with similarities together:

* Get from bed to work
  * Bedroom things
    * Get out of bed
    * Pick out clothes
    * Get dressed
  * Bathroom things
    * Take a shower
    * Brush your teeth
  * Breakfast things
    * Prepare cereal
    * Eat cereal
  * Transportation things
    * Get in your car
    * Drive to work

As it turns out, these task hierarchies are extremely useful in programming, because once you have a task hierarchy, you have essentially defined the structure of your overall program. The top level task (in this case, “Clean the house” or “Go to work”) becomes main() (because it is the main problem you are trying to solve). The subitems become functions in the program.

If it turns out that one of the items (functions) is too difficult to implement, simply split that item into multiple sub-items/sub-functions. Eventually you should reach a point where each function in your program is trivial to implement.

## Design step 5: Figure out the sequence of events

Now that your program has a structure, it’s time to determine how to link all the tasks together. The first step is to determine the sequence of events that will be performed. For example, when you get up in the morning, what order do you do the above tasks? It might look like this:

* Bedroom things
* Bathroom things
* Breakfast things
* Transportation things

If we were writing a calculator, we might do things in this order:

* Get first number from user
* Get mathematical operation from user
* Get second number from user
* Calculate result
* Print result

At this point, we’re ready for implementation.
